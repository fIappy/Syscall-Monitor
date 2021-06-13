/********************************************************************************
** Form generated from reading UI file 'filterloadingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERLOADINGDIALOG_H
#define UI_FILTERLOADINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FilterLoadingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_loading;
    QProgressBar *progressBar_loading;

    void setupUi(QDialog *FilterLoadingDialog)
    {
        if (FilterLoadingDialog->objectName().isEmpty())
            FilterLoadingDialog->setObjectName(QString::fromUtf8("FilterLoadingDialog"));
        FilterLoadingDialog->resize(280, 120);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FilterLoadingDialog->sizePolicy().hasHeightForWidth());
        FilterLoadingDialog->setSizePolicy(sizePolicy);
        FilterLoadingDialog->setModal(true);
        verticalLayout = new QVBoxLayout(FilterLoadingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_loading = new QLabel(FilterLoadingDialog);
        label_loading->setObjectName(QString::fromUtf8("label_loading"));
        label_loading->setTextFormat(Qt::PlainText);
        label_loading->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_loading);

        progressBar_loading = new QProgressBar(FilterLoadingDialog);
        progressBar_loading->setObjectName(QString::fromUtf8("progressBar_loading"));
        progressBar_loading->setValue(0);

        verticalLayout->addWidget(progressBar_loading);


        retranslateUi(FilterLoadingDialog);

        QMetaObject::connectSlotsByName(FilterLoadingDialog);
    } // setupUi

    void retranslateUi(QDialog *FilterLoadingDialog)
    {
        FilterLoadingDialog->setWindowTitle(QCoreApplication::translate("FilterLoadingDialog", "Filtering... Please wait...", nullptr));
        label_loading->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FilterLoadingDialog: public Ui_FilterLoadingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERLOADINGDIALOG_H
