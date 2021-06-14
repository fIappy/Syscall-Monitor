/********************************************************************************
** Form generated from reading UI file 'symloaddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYMLOADDIALOG_H
#define UI_SYMLOADDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SymLoadDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_cfg;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_vmx;
    QGroupBox *groupBox_km;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_ntoskrnl;
    QCheckBox *checkBox_win32k;
    QCheckBox *checkBox_win32kFull;
    QCheckBox *checkBox_fltmgr;
    QGroupBox *groupBox_um;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_ntdll;
    QCheckBox *checkBox_kernel32;
    QCheckBox *checkBox_kernelBase;
    QCheckBox *checkBox_user32;
    QLabel *label_loadingStatus;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_load;

    void setupUi(QDialog *SymLoadDialog)
    {
        if (SymLoadDialog->objectName().isEmpty())
            SymLoadDialog->setObjectName(QString::fromUtf8("SymLoadDialog"));
        SymLoadDialog->setWindowModality(Qt::NonModal);
        SymLoadDialog->resize(400, 260);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SymLoadDialog->sizePolicy().hasHeightForWidth());
        SymLoadDialog->setSizePolicy(sizePolicy);
        SymLoadDialog->setMinimumSize(QSize(400, 260));
        SymLoadDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(SymLoadDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(SymLoadDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_cfg = new QGroupBox(frame);
        groupBox_cfg->setObjectName(QString::fromUtf8("groupBox_cfg"));
        groupBox_cfg->setMinimumSize(QSize(0, 64));
        horizontalLayout_4 = new QHBoxLayout(groupBox_cfg);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        checkBox_vmx = new QCheckBox(groupBox_cfg);
        checkBox_vmx->setObjectName(QString::fromUtf8("checkBox_vmx"));
        checkBox_vmx->setEnabled(true);
        checkBox_vmx->setChecked(false);

        horizontalLayout_4->addWidget(checkBox_vmx);


        verticalLayout->addWidget(groupBox_cfg);

        groupBox_km = new QGroupBox(frame);
        groupBox_km->setObjectName(QString::fromUtf8("groupBox_km"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_km->sizePolicy().hasHeightForWidth());
        groupBox_km->setSizePolicy(sizePolicy1);
        groupBox_km->setMinimumSize(QSize(0, 64));
        horizontalLayout_3 = new QHBoxLayout(groupBox_km);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkBox_ntoskrnl = new QCheckBox(groupBox_km);
        checkBox_ntoskrnl->setObjectName(QString::fromUtf8("checkBox_ntoskrnl"));
        checkBox_ntoskrnl->setChecked(true);

        horizontalLayout_3->addWidget(checkBox_ntoskrnl);

        checkBox_win32k = new QCheckBox(groupBox_km);
        checkBox_win32k->setObjectName(QString::fromUtf8("checkBox_win32k"));
        checkBox_win32k->setChecked(true);

        horizontalLayout_3->addWidget(checkBox_win32k);

        checkBox_win32kFull = new QCheckBox(groupBox_km);
        checkBox_win32kFull->setObjectName(QString::fromUtf8("checkBox_win32kFull"));
        checkBox_win32kFull->setChecked(true);

        horizontalLayout_3->addWidget(checkBox_win32kFull);

        checkBox_fltmgr = new QCheckBox(groupBox_km);
        checkBox_fltmgr->setObjectName(QString::fromUtf8("checkBox_fltmgr"));
        checkBox_fltmgr->setChecked(true);

        horizontalLayout_3->addWidget(checkBox_fltmgr);


        verticalLayout->addWidget(groupBox_km);

        groupBox_um = new QGroupBox(frame);
        groupBox_um->setObjectName(QString::fromUtf8("groupBox_um"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_um->sizePolicy().hasHeightForWidth());
        groupBox_um->setSizePolicy(sizePolicy2);
        groupBox_um->setMinimumSize(QSize(0, 64));
        horizontalLayout_2 = new QHBoxLayout(groupBox_um);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox_ntdll = new QCheckBox(groupBox_um);
        checkBox_ntdll->setObjectName(QString::fromUtf8("checkBox_ntdll"));
        checkBox_ntdll->setChecked(true);

        horizontalLayout_2->addWidget(checkBox_ntdll);

        checkBox_kernel32 = new QCheckBox(groupBox_um);
        checkBox_kernel32->setObjectName(QString::fromUtf8("checkBox_kernel32"));
        checkBox_kernel32->setChecked(true);

        horizontalLayout_2->addWidget(checkBox_kernel32);

        checkBox_kernelBase = new QCheckBox(groupBox_um);
        checkBox_kernelBase->setObjectName(QString::fromUtf8("checkBox_kernelBase"));
        checkBox_kernelBase->setChecked(true);

        horizontalLayout_2->addWidget(checkBox_kernelBase);

        checkBox_user32 = new QCheckBox(groupBox_um);
        checkBox_user32->setObjectName(QString::fromUtf8("checkBox_user32"));
        checkBox_user32->setChecked(true);
        checkBox_user32->setTristate(false);

        horizontalLayout_2->addWidget(checkBox_user32);


        verticalLayout->addWidget(groupBox_um);

        label_loadingStatus = new QLabel(frame);
        label_loadingStatus->setObjectName(QString::fromUtf8("label_loadingStatus"));
        label_loadingStatus->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(label_loadingStatus);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, -1);
        pushButton_load = new QPushButton(frame);
        pushButton_load->setObjectName(QString::fromUtf8("pushButton_load"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_load->sizePolicy().hasHeightForWidth());
        pushButton_load->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(pushButton_load, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(frame);


        retranslateUi(SymLoadDialog);

        QMetaObject::connectSlotsByName(SymLoadDialog);
    } // setupUi

    void retranslateUi(QDialog *SymLoadDialog)
    {
        SymLoadDialog->setWindowTitle(QCoreApplication::translate("SymLoadDialog", "Configuration", nullptr));
        groupBox_cfg->setTitle(QCoreApplication::translate("SymLoadDialog", "Configurations", nullptr));
        checkBox_vmx->setText(QCoreApplication::translate("SymLoadDialog", "Enable Vmx", nullptr));
        groupBox_km->setTitle(QCoreApplication::translate("SymLoadDialog", "Kernel-mode module symbols", nullptr));
        checkBox_ntoskrnl->setText(QCoreApplication::translate("SymLoadDialog", "ntoskrnl", nullptr));
        checkBox_win32k->setText(QCoreApplication::translate("SymLoadDialog", "win32k", nullptr));
        checkBox_win32kFull->setText(QCoreApplication::translate("SymLoadDialog", "win32kfull", nullptr));
        checkBox_fltmgr->setText(QCoreApplication::translate("SymLoadDialog", "fltmgr", nullptr));
        groupBox_um->setTitle(QCoreApplication::translate("SymLoadDialog", "User-mode module symbols", nullptr));
        checkBox_ntdll->setText(QCoreApplication::translate("SymLoadDialog", "ntdll", nullptr));
        checkBox_kernel32->setText(QCoreApplication::translate("SymLoadDialog", "kernel32", nullptr));
        checkBox_kernelBase->setText(QCoreApplication::translate("SymLoadDialog", "kernelBase", nullptr));
        checkBox_user32->setText(QCoreApplication::translate("SymLoadDialog", "user32", nullptr));
        label_loadingStatus->setText(QString());
        pushButton_load->setText(QCoreApplication::translate("SymLoadDialog", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SymLoadDialog: public Ui_SymLoadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYMLOADDIALOG_H
