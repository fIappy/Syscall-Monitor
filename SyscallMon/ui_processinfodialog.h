/********************************************************************************
** Form generated from reading UI file 'processinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSINFODIALOG_H
#define UI_PROCESSINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickablelineedit.h"

QT_BEGIN_NAMESPACE

class Ui_ProcessInfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_process;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_image;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_ImageIcon;
    QGridLayout *gridLayout_5;
    QLabel *label_FileSize;
    QLineEdit *lineEdit_FileSize;
    QLabel *label_FileName;
    QLineEdit *lineEdit_FileName;
    QGridLayout *gridLayout_3;
    QLabel *label_FileVersion;
    QLineEdit *lineEdit_FileVersion;
    QLabel *label_ProductVersion;
    QLineEdit *lineEdit_ProductVersion;
    QGridLayout *gridLayout;
    QLabel *label_FileDesc;
    QLineEdit *lineEdit_FileDesc;
    QLabel *label_ProductName;
    QLineEdit *lineEdit_ProductName;
    QLabel *label_CompanyName;
    QLineEdit *lineEdit_CompanyName;
    QLabel *label_Copyright;
    QLineEdit *lineEdit_Copyright;
    QLabel *label_ImagePath;
    QTextEdit *textEdit_ImagePath;
    QGroupBox *groupBox_process;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_4;
    QLabel *label_CreateTime;
    QLabel *label_ParentProcess;
    QLineEdit *lineEdit_CreateTime;
    ClickableLineEdit *lineEdit_ParentProcess;
    QLineEdit *lineEdit_PID;
    QLabel *label_PID;
    QLineEdit *lineEdit_SessionId;
    QLabel *label_SessionID;
    QLabel *label_Status;
    QLabel *label_Arch;
    QLineEdit *lineEdit_Arch;
    QLineEdit *lineEdit_Status;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_CurrentDirectory;
    QLabel *label_CurrentDirectory;
    QLabel *label_CommandLine;
    QTextEdit *textEdit_CommandLine;
    QWidget *tab_thread;
    QWidget *tab_modules;

    void setupUi(QDialog *ProcessInfoDialog)
    {
        if (ProcessInfoDialog->objectName().isEmpty())
            ProcessInfoDialog->setObjectName(QString::fromUtf8("ProcessInfoDialog"));
        ProcessInfoDialog->resize(600, 500);
        ProcessInfoDialog->setMinimumSize(QSize(600, 500));
        ProcessInfoDialog->setModal(true);
        verticalLayout = new QVBoxLayout(ProcessInfoDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(ProcessInfoDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_process = new QWidget();
        tab_process->setObjectName(QString::fromUtf8("tab_process"));
        verticalLayout_2 = new QVBoxLayout(tab_process);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_image = new QGroupBox(tab_process);
        groupBox_image->setObjectName(QString::fromUtf8("groupBox_image"));
        verticalLayout_3 = new QVBoxLayout(groupBox_image);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_ImageIcon = new QLabel(groupBox_image);
        label_ImageIcon->setObjectName(QString::fromUtf8("label_ImageIcon"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_ImageIcon->sizePolicy().hasHeightForWidth());
        label_ImageIcon->setSizePolicy(sizePolicy);
        label_ImageIcon->setMinimumSize(QSize(32, 32));
        label_ImageIcon->setMaximumSize(QSize(32, 32));
        label_ImageIcon->setSizeIncrement(QSize(0, 0));
        label_ImageIcon->setLayoutDirection(Qt::LeftToRight);
        label_ImageIcon->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_ImageIcon, 0, Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_FileSize = new QLabel(groupBox_image);
        label_FileSize->setObjectName(QString::fromUtf8("label_FileSize"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_FileSize->sizePolicy().hasHeightForWidth());
        label_FileSize->setSizePolicy(sizePolicy1);
        label_FileSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_FileSize, 1, 0, 1, 1, Qt::AlignLeft);

        lineEdit_FileSize = new QLineEdit(groupBox_image);
        lineEdit_FileSize->setObjectName(QString::fromUtf8("lineEdit_FileSize"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_FileSize->sizePolicy().hasHeightForWidth());
        lineEdit_FileSize->setSizePolicy(sizePolicy2);
        lineEdit_FileSize->setStyleSheet(QString::fromUtf8(""));
        lineEdit_FileSize->setFrame(true);
        lineEdit_FileSize->setReadOnly(true);
        lineEdit_FileSize->setClearButtonEnabled(false);

        gridLayout_5->addWidget(lineEdit_FileSize, 1, 1, 1, 1);

        label_FileName = new QLabel(groupBox_image);
        label_FileName->setObjectName(QString::fromUtf8("label_FileName"));
        sizePolicy1.setHeightForWidth(label_FileName->sizePolicy().hasHeightForWidth());
        label_FileName->setSizePolicy(sizePolicy1);
        label_FileName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_FileName, 0, 0, 1, 1, Qt::AlignLeft);

        lineEdit_FileName = new QLineEdit(groupBox_image);
        lineEdit_FileName->setObjectName(QString::fromUtf8("lineEdit_FileName"));
        sizePolicy2.setHeightForWidth(lineEdit_FileName->sizePolicy().hasHeightForWidth());
        lineEdit_FileName->setSizePolicy(sizePolicy2);
        lineEdit_FileName->setStyleSheet(QString::fromUtf8(""));
        lineEdit_FileName->setFrame(true);
        lineEdit_FileName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_FileName->setReadOnly(true);

        gridLayout_5->addWidget(lineEdit_FileName, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_5);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_FileVersion = new QLabel(groupBox_image);
        label_FileVersion->setObjectName(QString::fromUtf8("label_FileVersion"));
        sizePolicy1.setHeightForWidth(label_FileVersion->sizePolicy().hasHeightForWidth());
        label_FileVersion->setSizePolicy(sizePolicy1);
        label_FileVersion->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_FileVersion, 0, 0, 1, 1, Qt::AlignRight);

        lineEdit_FileVersion = new QLineEdit(groupBox_image);
        lineEdit_FileVersion->setObjectName(QString::fromUtf8("lineEdit_FileVersion"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_FileVersion->sizePolicy().hasHeightForWidth());
        lineEdit_FileVersion->setSizePolicy(sizePolicy3);
        lineEdit_FileVersion->setStyleSheet(QString::fromUtf8(""));
        lineEdit_FileVersion->setFrame(true);
        lineEdit_FileVersion->setReadOnly(true);
        lineEdit_FileVersion->setClearButtonEnabled(false);

        gridLayout_3->addWidget(lineEdit_FileVersion, 0, 1, 1, 1);

        label_ProductVersion = new QLabel(groupBox_image);
        label_ProductVersion->setObjectName(QString::fromUtf8("label_ProductVersion"));
        sizePolicy1.setHeightForWidth(label_ProductVersion->sizePolicy().hasHeightForWidth());
        label_ProductVersion->setSizePolicy(sizePolicy1);
        label_ProductVersion->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_ProductVersion, 1, 0, 1, 1, Qt::AlignRight);

        lineEdit_ProductVersion = new QLineEdit(groupBox_image);
        lineEdit_ProductVersion->setObjectName(QString::fromUtf8("lineEdit_ProductVersion"));
        sizePolicy2.setHeightForWidth(lineEdit_ProductVersion->sizePolicy().hasHeightForWidth());
        lineEdit_ProductVersion->setSizePolicy(sizePolicy2);
        lineEdit_ProductVersion->setAcceptDrops(false);
        lineEdit_ProductVersion->setReadOnly(true);
        lineEdit_ProductVersion->setClearButtonEnabled(false);

        gridLayout_3->addWidget(lineEdit_ProductVersion, 1, 1, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 2);

        horizontalLayout->addLayout(gridLayout_3);

        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_3->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, -1);
        label_FileDesc = new QLabel(groupBox_image);
        label_FileDesc->setObjectName(QString::fromUtf8("label_FileDesc"));
        sizePolicy1.setHeightForWidth(label_FileDesc->sizePolicy().hasHeightForWidth());
        label_FileDesc->setSizePolicy(sizePolicy1);
        label_FileDesc->setLayoutDirection(Qt::LeftToRight);
        label_FileDesc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_FileDesc, 0, 0, 1, 1);

        lineEdit_FileDesc = new QLineEdit(groupBox_image);
        lineEdit_FileDesc->setObjectName(QString::fromUtf8("lineEdit_FileDesc"));
        sizePolicy2.setHeightForWidth(lineEdit_FileDesc->sizePolicy().hasHeightForWidth());
        lineEdit_FileDesc->setSizePolicy(sizePolicy2);
        lineEdit_FileDesc->setAcceptDrops(false);
        lineEdit_FileDesc->setReadOnly(true);
        lineEdit_FileDesc->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_FileDesc, 0, 1, 1, 1);

        label_ProductName = new QLabel(groupBox_image);
        label_ProductName->setObjectName(QString::fromUtf8("label_ProductName"));
        sizePolicy1.setHeightForWidth(label_ProductName->sizePolicy().hasHeightForWidth());
        label_ProductName->setSizePolicy(sizePolicy1);
        label_ProductName->setLayoutDirection(Qt::LeftToRight);
        label_ProductName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_ProductName, 1, 0, 1, 1);

        lineEdit_ProductName = new QLineEdit(groupBox_image);
        lineEdit_ProductName->setObjectName(QString::fromUtf8("lineEdit_ProductName"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEdit_ProductName->sizePolicy().hasHeightForWidth());
        lineEdit_ProductName->setSizePolicy(sizePolicy4);
        lineEdit_ProductName->setAcceptDrops(false);
        lineEdit_ProductName->setStyleSheet(QString::fromUtf8(""));
        lineEdit_ProductName->setReadOnly(true);
        lineEdit_ProductName->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_ProductName, 1, 1, 1, 1);

        label_CompanyName = new QLabel(groupBox_image);
        label_CompanyName->setObjectName(QString::fromUtf8("label_CompanyName"));
        sizePolicy1.setHeightForWidth(label_CompanyName->sizePolicy().hasHeightForWidth());
        label_CompanyName->setSizePolicy(sizePolicy1);
        label_CompanyName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_CompanyName, 2, 0, 1, 1);

        lineEdit_CompanyName = new QLineEdit(groupBox_image);
        lineEdit_CompanyName->setObjectName(QString::fromUtf8("lineEdit_CompanyName"));
        sizePolicy2.setHeightForWidth(lineEdit_CompanyName->sizePolicy().hasHeightForWidth());
        lineEdit_CompanyName->setSizePolicy(sizePolicy2);
        lineEdit_CompanyName->setAcceptDrops(false);
        lineEdit_CompanyName->setReadOnly(true);
        lineEdit_CompanyName->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_CompanyName, 2, 1, 1, 1);

        label_Copyright = new QLabel(groupBox_image);
        label_Copyright->setObjectName(QString::fromUtf8("label_Copyright"));
        sizePolicy1.setHeightForWidth(label_Copyright->sizePolicy().hasHeightForWidth());
        label_Copyright->setSizePolicy(sizePolicy1);
        label_Copyright->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_Copyright, 3, 0, 1, 1);

        lineEdit_Copyright = new QLineEdit(groupBox_image);
        lineEdit_Copyright->setObjectName(QString::fromUtf8("lineEdit_Copyright"));
        sizePolicy2.setHeightForWidth(lineEdit_Copyright->sizePolicy().hasHeightForWidth());
        lineEdit_Copyright->setSizePolicy(sizePolicy2);
        lineEdit_Copyright->setAcceptDrops(false);
        lineEdit_Copyright->setReadOnly(true);
        lineEdit_Copyright->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_Copyright, 3, 1, 1, 1);

        label_ImagePath = new QLabel(groupBox_image);
        label_ImagePath->setObjectName(QString::fromUtf8("label_ImagePath"));
        sizePolicy1.setHeightForWidth(label_ImagePath->sizePolicy().hasHeightForWidth());
        label_ImagePath->setSizePolicy(sizePolicy1);
        label_ImagePath->setLayoutDirection(Qt::LeftToRight);
        label_ImagePath->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(label_ImagePath, 4, 0, 1, 1);

        textEdit_ImagePath = new QTextEdit(groupBox_image);
        textEdit_ImagePath->setObjectName(QString::fromUtf8("textEdit_ImagePath"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(textEdit_ImagePath->sizePolicy().hasHeightForWidth());
        textEdit_ImagePath->setSizePolicy(sizePolicy5);
        textEdit_ImagePath->setMinimumSize(QSize(0, 0));
        textEdit_ImagePath->setMaximumSize(QSize(16777215, 64));
        textEdit_ImagePath->setReadOnly(true);

        gridLayout->addWidget(textEdit_ImagePath, 4, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout_2->addWidget(groupBox_image);

        groupBox_process = new QGroupBox(tab_process);
        groupBox_process->setObjectName(QString::fromUtf8("groupBox_process"));
        verticalLayout_5 = new QVBoxLayout(groupBox_process);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(6, 6, 6, 6);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_CreateTime = new QLabel(groupBox_process);
        label_CreateTime->setObjectName(QString::fromUtf8("label_CreateTime"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_CreateTime->sizePolicy().hasHeightForWidth());
        label_CreateTime->setSizePolicy(sizePolicy6);
        label_CreateTime->setMinimumSize(QSize(108, 0));
        label_CreateTime->setLayoutDirection(Qt::LeftToRight);
        label_CreateTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_CreateTime, 2, 0, 1, 1);

        label_ParentProcess = new QLabel(groupBox_process);
        label_ParentProcess->setObjectName(QString::fromUtf8("label_ParentProcess"));
        sizePolicy6.setHeightForWidth(label_ParentProcess->sizePolicy().hasHeightForWidth());
        label_ParentProcess->setSizePolicy(sizePolicy6);
        label_ParentProcess->setMinimumSize(QSize(108, 0));
        label_ParentProcess->setLayoutDirection(Qt::LeftToRight);
        label_ParentProcess->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_ParentProcess, 1, 0, 1, 1);

        lineEdit_CreateTime = new QLineEdit(groupBox_process);
        lineEdit_CreateTime->setObjectName(QString::fromUtf8("lineEdit_CreateTime"));
        sizePolicy5.setHeightForWidth(lineEdit_CreateTime->sizePolicy().hasHeightForWidth());
        lineEdit_CreateTime->setSizePolicy(sizePolicy5);
        lineEdit_CreateTime->setMinimumSize(QSize(0, 0));
        lineEdit_CreateTime->setStyleSheet(QString::fromUtf8(""));
        lineEdit_CreateTime->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit_CreateTime, 2, 1, 1, 1);

        lineEdit_ParentProcess = new ClickableLineEdit(groupBox_process);
        lineEdit_ParentProcess->setObjectName(QString::fromUtf8("lineEdit_ParentProcess"));
        sizePolicy5.setHeightForWidth(lineEdit_ParentProcess->sizePolicy().hasHeightForWidth());
        lineEdit_ParentProcess->setSizePolicy(sizePolicy5);
        lineEdit_ParentProcess->setMinimumSize(QSize(0, 0));
        lineEdit_ParentProcess->setStyleSheet(QString::fromUtf8(""));
        lineEdit_ParentProcess->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit_ParentProcess, 1, 1, 1, 1);

        lineEdit_PID = new QLineEdit(groupBox_process);
        lineEdit_PID->setObjectName(QString::fromUtf8("lineEdit_PID"));
        sizePolicy5.setHeightForWidth(lineEdit_PID->sizePolicy().hasHeightForWidth());
        lineEdit_PID->setSizePolicy(sizePolicy5);
        lineEdit_PID->setMinimumSize(QSize(0, 0));
        lineEdit_PID->setStyleSheet(QString::fromUtf8(""));
        lineEdit_PID->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit_PID, 0, 1, 1, 1);

        label_PID = new QLabel(groupBox_process);
        label_PID->setObjectName(QString::fromUtf8("label_PID"));
        sizePolicy6.setHeightForWidth(label_PID->sizePolicy().hasHeightForWidth());
        label_PID->setSizePolicy(sizePolicy6);
        label_PID->setMinimumSize(QSize(108, 0));
        label_PID->setLayoutDirection(Qt::LeftToRight);
        label_PID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_PID, 0, 0, 1, 1);

        lineEdit_SessionId = new QLineEdit(groupBox_process);
        lineEdit_SessionId->setObjectName(QString::fromUtf8("lineEdit_SessionId"));
        sizePolicy5.setHeightForWidth(lineEdit_SessionId->sizePolicy().hasHeightForWidth());
        lineEdit_SessionId->setSizePolicy(sizePolicy5);
        lineEdit_SessionId->setStyleSheet(QString::fromUtf8(""));
        lineEdit_SessionId->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit_SessionId, 2, 3, 1, 1);

        label_SessionID = new QLabel(groupBox_process);
        label_SessionID->setObjectName(QString::fromUtf8("label_SessionID"));
        sizePolicy6.setHeightForWidth(label_SessionID->sizePolicy().hasHeightForWidth());
        label_SessionID->setSizePolicy(sizePolicy6);
        label_SessionID->setMinimumSize(QSize(108, 0));
        label_SessionID->setLayoutDirection(Qt::LeftToRight);
        label_SessionID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_SessionID, 2, 2, 1, 1, Qt::AlignLeft);

        label_Status = new QLabel(groupBox_process);
        label_Status->setObjectName(QString::fromUtf8("label_Status"));
        sizePolicy6.setHeightForWidth(label_Status->sizePolicy().hasHeightForWidth());
        label_Status->setSizePolicy(sizePolicy6);
        label_Status->setMinimumSize(QSize(108, 0));
        label_Status->setLayoutDirection(Qt::LeftToRight);
        label_Status->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_Status, 0, 2, 1, 1, Qt::AlignLeft);

        label_Arch = new QLabel(groupBox_process);
        label_Arch->setObjectName(QString::fromUtf8("label_Arch"));
        sizePolicy6.setHeightForWidth(label_Arch->sizePolicy().hasHeightForWidth());
        label_Arch->setSizePolicy(sizePolicy6);
        label_Arch->setMinimumSize(QSize(108, 0));
        label_Arch->setLayoutDirection(Qt::LeftToRight);
        label_Arch->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_Arch, 1, 2, 1, 1, Qt::AlignLeft);

        lineEdit_Arch = new QLineEdit(groupBox_process);
        lineEdit_Arch->setObjectName(QString::fromUtf8("lineEdit_Arch"));
        sizePolicy5.setHeightForWidth(lineEdit_Arch->sizePolicy().hasHeightForWidth());
        lineEdit_Arch->setSizePolicy(sizePolicy5);
        lineEdit_Arch->setStyleSheet(QString::fromUtf8(""));
        lineEdit_Arch->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit_Arch, 1, 3, 1, 1);

        lineEdit_Status = new QLineEdit(groupBox_process);
        lineEdit_Status->setObjectName(QString::fromUtf8("lineEdit_Status"));
        sizePolicy5.setHeightForWidth(lineEdit_Status->sizePolicy().hasHeightForWidth());
        lineEdit_Status->setSizePolicy(sizePolicy5);
        lineEdit_Status->setStyleSheet(QString::fromUtf8(""));
        lineEdit_Status->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit_Status, 0, 3, 1, 1);

        gridLayout_4->setColumnStretch(1, 2);
        gridLayout_4->setColumnStretch(3, 1);

        verticalLayout_5->addLayout(gridLayout_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit_CurrentDirectory = new QLineEdit(groupBox_process);
        lineEdit_CurrentDirectory->setObjectName(QString::fromUtf8("lineEdit_CurrentDirectory"));
        sizePolicy3.setHeightForWidth(lineEdit_CurrentDirectory->sizePolicy().hasHeightForWidth());
        lineEdit_CurrentDirectory->setSizePolicy(sizePolicy3);
        lineEdit_CurrentDirectory->setAcceptDrops(false);
        lineEdit_CurrentDirectory->setReadOnly(true);
        lineEdit_CurrentDirectory->setClearButtonEnabled(false);

        gridLayout_2->addWidget(lineEdit_CurrentDirectory, 0, 1, 1, 1);

        label_CurrentDirectory = new QLabel(groupBox_process);
        label_CurrentDirectory->setObjectName(QString::fromUtf8("label_CurrentDirectory"));
        sizePolicy6.setHeightForWidth(label_CurrentDirectory->sizePolicy().hasHeightForWidth());
        label_CurrentDirectory->setSizePolicy(sizePolicy6);
        label_CurrentDirectory->setMinimumSize(QSize(108, 0));
        label_CurrentDirectory->setLayoutDirection(Qt::LeftToRight);
        label_CurrentDirectory->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_CurrentDirectory, 0, 0, 1, 1);

        label_CommandLine = new QLabel(groupBox_process);
        label_CommandLine->setObjectName(QString::fromUtf8("label_CommandLine"));
        sizePolicy1.setHeightForWidth(label_CommandLine->sizePolicy().hasHeightForWidth());
        label_CommandLine->setSizePolicy(sizePolicy1);
        label_CommandLine->setLayoutDirection(Qt::LeftToRight);
        label_CommandLine->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_2->addWidget(label_CommandLine, 1, 0, 1, 1);

        textEdit_CommandLine = new QTextEdit(groupBox_process);
        textEdit_CommandLine->setObjectName(QString::fromUtf8("textEdit_CommandLine"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(textEdit_CommandLine->sizePolicy().hasHeightForWidth());
        textEdit_CommandLine->setSizePolicy(sizePolicy7);
        textEdit_CommandLine->setReadOnly(true);

        gridLayout_2->addWidget(textEdit_CommandLine, 1, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_2);


        verticalLayout_2->addWidget(groupBox_process);

        tabWidget->addTab(tab_process, QString());
        tab_thread = new QWidget();
        tab_thread->setObjectName(QString::fromUtf8("tab_thread"));
        tabWidget->addTab(tab_thread, QString());
        tab_modules = new QWidget();
        tab_modules->setObjectName(QString::fromUtf8("tab_modules"));
        tabWidget->addTab(tab_modules, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(ProcessInfoDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ProcessInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *ProcessInfoDialog)
    {
        ProcessInfoDialog->setWindowTitle(QCoreApplication::translate("ProcessInfoDialog", "Process Information", nullptr));
        groupBox_image->setTitle(QCoreApplication::translate("ProcessInfoDialog", "Image", nullptr));
        label_ImageIcon->setText(QString());
        label_FileSize->setText(QCoreApplication::translate("ProcessInfoDialog", "File Size:", nullptr));
        label_FileName->setText(QCoreApplication::translate("ProcessInfoDialog", "File Name:", nullptr));
        label_FileVersion->setText(QCoreApplication::translate("ProcessInfoDialog", "File Version:", nullptr));
        label_ProductVersion->setText(QCoreApplication::translate("ProcessInfoDialog", "Product Version:", nullptr));
        label_FileDesc->setText(QCoreApplication::translate("ProcessInfoDialog", "File Description:", nullptr));
        label_ProductName->setText(QCoreApplication::translate("ProcessInfoDialog", "Product Name:", nullptr));
        label_CompanyName->setText(QCoreApplication::translate("ProcessInfoDialog", "Company Name:", nullptr));
        label_Copyright->setText(QCoreApplication::translate("ProcessInfoDialog", "Copyrights:", nullptr));
        label_ImagePath->setText(QCoreApplication::translate("ProcessInfoDialog", "Image Path:", nullptr));
        groupBox_process->setTitle(QCoreApplication::translate("ProcessInfoDialog", "Process", nullptr));
        label_CreateTime->setText(QCoreApplication::translate("ProcessInfoDialog", "Create Time:", nullptr));
        label_ParentProcess->setText(QCoreApplication::translate("ProcessInfoDialog", "Parent Process:", nullptr));
        label_PID->setText(QCoreApplication::translate("ProcessInfoDialog", "PID:", nullptr));
        label_SessionID->setText(QCoreApplication::translate("ProcessInfoDialog", "Session ID:", nullptr));
        label_Status->setText(QCoreApplication::translate("ProcessInfoDialog", "Status:", nullptr));
        label_Arch->setText(QCoreApplication::translate("ProcessInfoDialog", "Archtecture:", nullptr));
        label_CurrentDirectory->setText(QCoreApplication::translate("ProcessInfoDialog", "Current Directory:", nullptr));
        label_CommandLine->setText(QCoreApplication::translate("ProcessInfoDialog", "Command Line:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_process), QCoreApplication::translate("ProcessInfoDialog", "Process", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_thread), QCoreApplication::translate("ProcessInfoDialog", "Thread", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_modules), QCoreApplication::translate("ProcessInfoDialog", "Module", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProcessInfoDialog: public Ui_ProcessInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSINFODIALOG_H
