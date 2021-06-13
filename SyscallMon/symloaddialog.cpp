﻿#include "symloaddialog.h"
#include "ui_symloaddialog.h"
#include "EventMgr.h"
#include "DriverWrapper.h"
#include "ps.h"
#include "nt.h"
#include "util.h"

SymLoadDialog::SymLoadDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SymLoadDialog)
{
    ui->setupUi(this);

    setWindowFlags(Qt::Dialog | Qt::WindowCloseButtonHint);

    setAttribute(Qt::WA_DeleteOnClose);

    m_LoadState = LoadState::Idle;

    if(!IsVmxAvailable())
        ui->checkBox_vmx->setEnabled(false);

    connect(m_ModuleMgr, &CModuleMgr::LoadAllImageCompleteNotify, this, &SymLoadDialog::OnLoadAllImageCompleteNotify);
    connect(m_ModuleMgr, &CModuleMgr::LoadingImageNotify, this, &SymLoadDialog::OnLoadingImageNotify, Qt::QueuedConnection);
}

SymLoadDialog::~SymLoadDialog()
{
    delete ui;
}

//void SymLoadDialog::closeEvent(QCloseEvent *e)
//{
    /*if(m_LoadState != LoadState::Loaded)
    {
        e->ignore();
        return;
    }*/

    //SetProcessWorkingSetSize(GetCurrentProcess(), -1, -1);
//}

void SymLoadDialog::EnumSystemModuleProc(ULONG64 ImageBase, ULONG ImageSize, LPCWSTR szImagePath, int LoadOrderIndex)
{
    UNREFERENCED_PARAMETER(ImageBase);
    UNREFERENCED_PARAMETER(ImageSize);

    if(LoadOrderIndex == 0)
    {
        std::wstring path;
        NormalizeFilePath(szImagePath, path);
        m_ModuleMgr->m_Path_ntoskrnl = path;
        m_ModuleMgr->LoadImageFromFile(path, ui->checkBox_ntoskrnl->isChecked(), true);
        return;
    }

    if(!wcsicmp(szImagePath, L"\\SystemRoot\\System32\\win32k.sys"))
    {
        std::wstring path;
        NormalizeFilePath(szImagePath, path);
        m_ModuleMgr->m_Path_win32k = path;
        m_ModuleMgr->LoadImageFromFile(path, ui->checkBox_win32k->isChecked(), true);
        return;
    }

    if(!wcsicmp(szImagePath, L"\\SystemRoot\\System32\\win32kFull.sys"))
    {
        std::wstring path;
        NormalizeFilePath(szImagePath, path);
        m_ModuleMgr->m_Path_win32kFull = path;
        m_ModuleMgr->LoadImageFromFile(path, ui->checkBox_win32kFull->isChecked(), true);
        return;
    }

    if(!wcsicmp(szImagePath, L"\\SystemRoot\\System32\\drivers\\fltmgr.sys"))
    {
        std::wstring path;
        NormalizeFilePath(szImagePath, path);
        m_ModuleMgr->m_Path_fltmgr = path;
        m_ModuleMgr->LoadImageFromFile(path, ui->checkBox_fltmgr->isChecked(), true);
        return;
    }
}

void SymLoadDialog::on_pushButton_load_clicked()
{
    m_LoadState = LoadState::LoadingSymbol;

    ui->checkBox_ntoskrnl->setEnabled(false);
    ui->checkBox_win32k->setEnabled(false);
    ui->checkBox_win32kFull->setEnabled(false);
    ui->checkBox_ntdll->setEnabled(false);
    ui->checkBox_kernel32->setEnabled(false);
    ui->checkBox_kernelBase->setEnabled(false);
    ui->checkBox_user32->setEnabled(false);
    ui->checkBox_fltmgr->setEnabled(false);

    ui->pushButton_load->setEnabled(false);

    //drivers...
    EnumSystemModules(boost::bind(&SymLoadDialog::EnumSystemModuleProc, this, _1, _2, _3, _4));

    std::wstring path;

    NormalizeFilePath(L"\\SystemRoot\\System32\\ntdll.dll", path);
    m_ModuleMgr->LoadImageFromFile(path, ui->checkBox_ntdll->isChecked(), false);

    NormalizeFilePath(L"\\SystemRoot\\System32\\kernel32.dll", path);
    m_ModuleMgr->LoadImageFromFile(path, ui->checkBox_kernel32->isChecked(), false);

    NormalizeFilePath(L"\\SystemRoot\\System32\\kernelBase.dll", path);
    m_ModuleMgr->LoadImageFromFile(path, ui->checkBox_kernelBase->isChecked(), false);

    NormalizeFilePath(L"\\SystemRoot\\System32\\user32.dll", path);
    m_ModuleMgr->LoadImageFromFile(path, ui->checkBox_user32->isChecked(), false);

    if(IsAMD64())
    {
        NormalizeFilePath(L"\\SystemRoot\\SysWOW64\\ntdll.dll", path);
        m_ModuleMgr->LoadImageFromFile(path, ui->checkBox_ntdll->isChecked(), false);

        NormalizeFilePath(L"\\SystemRoot\\SysWOW64\\kernel32.dll", path);
        m_ModuleMgr->LoadImageFromFile(path, ui->checkBox_kernel32->isChecked(), false);

        NormalizeFilePath(L"\\SystemRoot\\SysWOW64\\kernelBase.dll", path);
        m_ModuleMgr->LoadImageFromFile(path, ui->checkBox_kernelBase->isChecked(), false);

        NormalizeFilePath(L"\\SystemRoot\\SysWOW64\\user32.dll", path);
        m_ModuleMgr->LoadImageFromFile(path, ui->checkBox_user32->isChecked(), false);
    }
}

void SymLoadDialog::OnLoadAllImageCompleteNotify(void)
{
    //Write symbol file...
    std::wstring symPath;
    NormalizeFilePath(L"\\SystemRoot\\SyscallMonSymbol.dat", symPath);
    HANDLE hFile = CreateFile(symPath.c_str(), GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, CREATE_ALWAYS, 0, NULL);
    if(hFile != INVALID_HANDLE_VALUE)
    {
        symbol_file_data data = {0};

        data.txsb = 'TXSB';
        data.ver = SYMBOL_FILE_VERSION;
        data.EnableVmx = ui->checkBox_vmx->isChecked() ? TRUE : FALSE;

        CUniqueImage *pWin32k = (m_ModuleMgr->m_Image_win32kFull) ? m_ModuleMgr->m_Image_win32kFull : m_ModuleMgr->m_Image_win32k;
        if(pWin32k)
        {
            std::string str = std::string("NtUserSetWindowsHookEx");
            data.NtUserSetWindowsHookExOffset =
                    pWin32k->FindFunctionOffsetByName(str);
            str = std::string("NtUserSetWindowsHookAW");
            data.NtUserSetWindowsHookAWOffset =
                    pWin32k->FindFunctionOffsetByName(str);
            str = std::string("NtUserFindWindowEx");
            data.NtUserFindWindowExOffset =
                    pWin32k->FindFunctionOffsetByName(str);
            str = std::string("NtUserInternalGetWindowText");
            data.NtUserInternalGetWindowTextOffset =
                    pWin32k->FindFunctionOffsetByName(str);
            str = std::string("NtUserGetClassName");
            data.NtUserGetClassNameOffset =
                    pWin32k->FindFunctionOffsetByName(str);
        }
        else
        {
            OutputDebugStringW(symPath.c_str());
        }

        DWORD dwWrite = 0;
        WriteFile(hFile, &data, sizeof(data), &dwWrite, NULL);
        CloseHandle(hFile);
    }

    m_LoadState = LoadState::Loaded;

    accept();
}

void SymLoadDialog::OnLoadingImageNotify(std::wstring moduleName)
{
    ui->label_loadingStatus->setText(tr("Loading symbol for %1...").arg(QString::fromStdWString(moduleName)));
}
