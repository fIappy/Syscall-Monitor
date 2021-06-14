/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QVBoxLayout *verticalLayout_2;
    QTreeView *treeView_Process;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QCheckBox *checkBox_EnableCapture;
    QCheckBox *checkBox_DropExclude;
    QPushButton *pushButton_OpenFilter;
    QLabel *labal_FilterStatus;
    QPushButton *pushButton_ClearEvents;
    QTableView *tableView_Event;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        MainWindow->setMinimumSize(QSize(800, 480));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/SyscallMon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        verticalLayout_2 = new QVBoxLayout(tab_1);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        treeView_Process = new QTreeView(tab_1);
        treeView_Process->setObjectName(QString::fromUtf8("treeView_Process"));
        treeView_Process->setContextMenuPolicy(Qt::CustomContextMenu);
        treeView_Process->setFrameShadow(QFrame::Sunken);
        treeView_Process->setLineWidth(1);
        treeView_Process->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);

        verticalLayout_2->addWidget(treeView_Process);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(8);
        checkBox_EnableCapture = new QCheckBox(tab_2);
        checkBox_EnableCapture->setObjectName(QString::fromUtf8("checkBox_EnableCapture"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkBox_EnableCapture->sizePolicy().hasHeightForWidth());
        checkBox_EnableCapture->setSizePolicy(sizePolicy);
        checkBox_EnableCapture->setChecked(true);

        gridLayout->addWidget(checkBox_EnableCapture, 0, 4, 1, 1);

        checkBox_DropExclude = new QCheckBox(tab_2);
        checkBox_DropExclude->setObjectName(QString::fromUtf8("checkBox_DropExclude"));
        sizePolicy.setHeightForWidth(checkBox_DropExclude->sizePolicy().hasHeightForWidth());
        checkBox_DropExclude->setSizePolicy(sizePolicy);
        checkBox_DropExclude->setChecked(false);

        gridLayout->addWidget(checkBox_DropExclude, 0, 3, 1, 1);

        pushButton_OpenFilter = new QPushButton(tab_2);
        pushButton_OpenFilter->setObjectName(QString::fromUtf8("pushButton_OpenFilter"));
        sizePolicy.setHeightForWidth(pushButton_OpenFilter->sizePolicy().hasHeightForWidth());
        pushButton_OpenFilter->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_OpenFilter, 0, 0, 1, 1);

        labal_FilterStatus = new QLabel(tab_2);
        labal_FilterStatus->setObjectName(QString::fromUtf8("labal_FilterStatus"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labal_FilterStatus->sizePolicy().hasHeightForWidth());
        labal_FilterStatus->setSizePolicy(sizePolicy1);
        labal_FilterStatus->setMinimumSize(QSize(250, 0));
        labal_FilterStatus->setBaseSize(QSize(0, 0));
        labal_FilterStatus->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(labal_FilterStatus, 0, 2, 1, 1);

        pushButton_ClearEvents = new QPushButton(tab_2);
        pushButton_ClearEvents->setObjectName(QString::fromUtf8("pushButton_ClearEvents"));
        sizePolicy.setHeightForWidth(pushButton_ClearEvents->sizePolicy().hasHeightForWidth());
        pushButton_ClearEvents->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_ClearEvents, 0, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        tableView_Event = new QTableView(tab_2);
        tableView_Event->setObjectName(QString::fromUtf8("tableView_Event"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableView_Event->sizePolicy().hasHeightForWidth());
        tableView_Event->setSizePolicy(sizePolicy2);
        tableView_Event->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView_Event->setAutoFillBackground(false);
        tableView_Event->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_Event->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_Event->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        tableView_Event->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableView_Event->setWordWrap(true);

        verticalLayout_3->addWidget(tableView_Event);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setEnabled(true);
        statusBar->setMinimumSize(QSize(0, 16));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Syscall Monitor", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "Process View", nullptr));
        checkBox_EnableCapture->setText(QCoreApplication::translate("MainWindow", "Enable Capture", nullptr));
        checkBox_DropExclude->setText(QCoreApplication::translate("MainWindow", "Drop Excluded Events", nullptr));
        pushButton_OpenFilter->setText(QCoreApplication::translate("MainWindow", "Filter", nullptr));
        labal_FilterStatus->setText(QString());
        pushButton_ClearEvents->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Behavior Monitor", nullptr));
#if QT_CONFIG(tooltip)
        statusBar->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        statusBar->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
