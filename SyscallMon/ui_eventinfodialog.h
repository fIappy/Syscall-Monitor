/********************************************************************************
** Form generated from reading UI file 'eventinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTINFODIALOG_H
#define UI_EVENTINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickablelineedit.h"

QT_BEGIN_NAMESPACE

class Ui_EventInfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_Thread;
    QLabel *label_Operation;
    QLineEdit *lineEdit_Date;
    QLineEdit *lineEdit_Class;
    QLineEdit *lineEdit_Type;
    QLabel *label_Path;
    QLabel *label_Process;
    QLabel *label_Date;
    QLabel *label_Thread;
    QLabel *label_Class;
    QLabel *label_Result;
    ClickableLineEdit *lineEdit_Process;
    QTextEdit *textEdit_Path;
    QLineEdit *lineEdit_Result;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *textEdit_Arguments;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_6;
    QTableView *tableView_CallStack;
    QLabel *label_LoadingSymbol;

    void setupUi(QDialog *EventInfoDialog)
    {
        if (EventInfoDialog->objectName().isEmpty())
            EventInfoDialog->setObjectName(QString::fromUtf8("EventInfoDialog"));
        EventInfoDialog->resize(450, 500);
        EventInfoDialog->setMinimumSize(QSize(450, 500));
        EventInfoDialog->setModal(true);
        verticalLayout = new QVBoxLayout(EventInfoDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(EventInfoDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255)"));
        groupBox->setFlat(false);
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, -1, 9);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_Thread = new QLineEdit(groupBox);
        lineEdit_Thread->setObjectName(QString::fromUtf8("lineEdit_Thread"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_Thread->sizePolicy().hasHeightForWidth());
        lineEdit_Thread->setSizePolicy(sizePolicy);
        lineEdit_Thread->setStyleSheet(QString::fromUtf8("border:none;"));
        lineEdit_Thread->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Thread, 2, 1, 1, 1);

        label_Operation = new QLabel(groupBox);
        label_Operation->setObjectName(QString::fromUtf8("label_Operation"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_Operation->sizePolicy().hasHeightForWidth());
        label_Operation->setSizePolicy(sizePolicy1);
        label_Operation->setMinimumSize(QSize(64, 0));

        gridLayout->addWidget(label_Operation, 3, 0, 1, 1);

        lineEdit_Date = new QLineEdit(groupBox);
        lineEdit_Date->setObjectName(QString::fromUtf8("lineEdit_Date"));
        sizePolicy.setHeightForWidth(lineEdit_Date->sizePolicy().hasHeightForWidth());
        lineEdit_Date->setSizePolicy(sizePolicy);
        lineEdit_Date->setStyleSheet(QString::fromUtf8("border:none;"));
        lineEdit_Date->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Date, 0, 1, 1, 1);

        lineEdit_Class = new QLineEdit(groupBox);
        lineEdit_Class->setObjectName(QString::fromUtf8("lineEdit_Class"));
        sizePolicy.setHeightForWidth(lineEdit_Class->sizePolicy().hasHeightForWidth());
        lineEdit_Class->setSizePolicy(sizePolicy);
        lineEdit_Class->setFocusPolicy(Qt::StrongFocus);
        lineEdit_Class->setStyleSheet(QString::fromUtf8("border:none;"));
        lineEdit_Class->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Class, 4, 1, 1, 1);

        lineEdit_Type = new QLineEdit(groupBox);
        lineEdit_Type->setObjectName(QString::fromUtf8("lineEdit_Type"));
        sizePolicy.setHeightForWidth(lineEdit_Type->sizePolicy().hasHeightForWidth());
        lineEdit_Type->setSizePolicy(sizePolicy);
        lineEdit_Type->setStyleSheet(QString::fromUtf8("border:none;"));
        lineEdit_Type->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Type, 3, 1, 1, 1);

        label_Path = new QLabel(groupBox);
        label_Path->setObjectName(QString::fromUtf8("label_Path"));
        sizePolicy1.setHeightForWidth(label_Path->sizePolicy().hasHeightForWidth());
        label_Path->setSizePolicy(sizePolicy1);
        label_Path->setMinimumSize(QSize(64, 0));
        label_Path->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_Path, 6, 0, 1, 1);

        label_Process = new QLabel(groupBox);
        label_Process->setObjectName(QString::fromUtf8("label_Process"));
        sizePolicy1.setHeightForWidth(label_Process->sizePolicy().hasHeightForWidth());
        label_Process->setSizePolicy(sizePolicy1);
        label_Process->setMinimumSize(QSize(64, 0));

        gridLayout->addWidget(label_Process, 1, 0, 1, 1);

        label_Date = new QLabel(groupBox);
        label_Date->setObjectName(QString::fromUtf8("label_Date"));
        sizePolicy1.setHeightForWidth(label_Date->sizePolicy().hasHeightForWidth());
        label_Date->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_Date, 0, 0, 1, 1);

        label_Thread = new QLabel(groupBox);
        label_Thread->setObjectName(QString::fromUtf8("label_Thread"));
        sizePolicy1.setHeightForWidth(label_Thread->sizePolicy().hasHeightForWidth());
        label_Thread->setSizePolicy(sizePolicy1);
        label_Thread->setMinimumSize(QSize(64, 0));

        gridLayout->addWidget(label_Thread, 2, 0, 1, 1);

        label_Class = new QLabel(groupBox);
        label_Class->setObjectName(QString::fromUtf8("label_Class"));
        sizePolicy1.setHeightForWidth(label_Class->sizePolicy().hasHeightForWidth());
        label_Class->setSizePolicy(sizePolicy1);
        label_Class->setMinimumSize(QSize(64, 0));

        gridLayout->addWidget(label_Class, 4, 0, 1, 1);

        label_Result = new QLabel(groupBox);
        label_Result->setObjectName(QString::fromUtf8("label_Result"));
        sizePolicy1.setHeightForWidth(label_Result->sizePolicy().hasHeightForWidth());
        label_Result->setSizePolicy(sizePolicy1);
        label_Result->setMinimumSize(QSize(64, 0));

        gridLayout->addWidget(label_Result, 5, 0, 1, 1);

        lineEdit_Process = new ClickableLineEdit(groupBox);
        lineEdit_Process->setObjectName(QString::fromUtf8("lineEdit_Process"));
        sizePolicy.setHeightForWidth(lineEdit_Process->sizePolicy().hasHeightForWidth());
        lineEdit_Process->setSizePolicy(sizePolicy);
        lineEdit_Process->setStyleSheet(QString::fromUtf8("border:none;"));
        lineEdit_Process->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Process, 1, 1, 1, 1);

        textEdit_Path = new QTextEdit(groupBox);
        textEdit_Path->setObjectName(QString::fromUtf8("textEdit_Path"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textEdit_Path->sizePolicy().hasHeightForWidth());
        textEdit_Path->setSizePolicy(sizePolicy2);
        textEdit_Path->setMinimumSize(QSize(0, 0));
        textEdit_Path->setMaximumSize(QSize(16777215, 60));
        textEdit_Path->setMouseTracking(true);
        textEdit_Path->setStyleSheet(QString::fromUtf8("border:none;"));
        textEdit_Path->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Path->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        textEdit_Path->setUndoRedoEnabled(false);
        textEdit_Path->setReadOnly(true);
        textEdit_Path->setAcceptRichText(true);

        gridLayout->addWidget(textEdit_Path, 6, 1, 1, 1);

        lineEdit_Result = new QLineEdit(groupBox);
        lineEdit_Result->setObjectName(QString::fromUtf8("lineEdit_Result"));
        sizePolicy.setHeightForWidth(lineEdit_Result->sizePolicy().hasHeightForWidth());
        lineEdit_Result->setSizePolicy(sizePolicy);
        lineEdit_Result->setFocusPolicy(Qt::StrongFocus);
        lineEdit_Result->setStyleSheet(QString::fromUtf8("border:none;"));
        lineEdit_Result->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Result, 5, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255)"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        textEdit_Arguments = new QTextEdit(groupBox_2);
        textEdit_Arguments->setObjectName(QString::fromUtf8("textEdit_Arguments"));
        textEdit_Arguments->setStyleSheet(QString::fromUtf8("border:none;"));
        textEdit_Arguments->setUndoRedoEnabled(false);
        textEdit_Arguments->setReadOnly(true);

        verticalLayout_4->addWidget(textEdit_Arguments);


        verticalLayout_2->addWidget(groupBox_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_6 = new QVBoxLayout(tab_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        tableView_CallStack = new QTableView(tab_2);
        tableView_CallStack->setObjectName(QString::fromUtf8("tableView_CallStack"));
        tableView_CallStack->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_CallStack->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_CallStack->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        tableView_CallStack->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableView_CallStack->setWordWrap(false);

        verticalLayout_6->addWidget(tableView_CallStack);

        label_LoadingSymbol = new QLabel(tab_2);
        label_LoadingSymbol->setObjectName(QString::fromUtf8("label_LoadingSymbol"));
        label_LoadingSymbol->setTextFormat(Qt::PlainText);

        verticalLayout_6->addWidget(label_LoadingSymbol);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(EventInfoDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EventInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *EventInfoDialog)
    {
        EventInfoDialog->setWindowTitle(QCoreApplication::translate("EventInfoDialog", "Event Information", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EventInfoDialog", "Detail", nullptr));
        label_Operation->setText(QCoreApplication::translate("EventInfoDialog", "Operation:", nullptr));
        label_Path->setText(QCoreApplication::translate("EventInfoDialog", "Path:", nullptr));
        label_Process->setText(QCoreApplication::translate("EventInfoDialog", "Process:", nullptr));
        label_Date->setText(QCoreApplication::translate("EventInfoDialog", "Date:", nullptr));
        label_Thread->setText(QCoreApplication::translate("EventInfoDialog", "Thread:", nullptr));
        label_Class->setText(QCoreApplication::translate("EventInfoDialog", "Class:", nullptr));
        label_Result->setText(QCoreApplication::translate("EventInfoDialog", "Result:", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_Process->setToolTip(QCoreApplication::translate("EventInfoDialog", "Click to check the detail...", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QCoreApplication::translate("EventInfoDialog", "Arguments", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("EventInfoDialog", "Event", nullptr));
        label_LoadingSymbol->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("EventInfoDialog", "Call Stack", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventInfoDialog: public Ui_EventInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTINFODIALOG_H
