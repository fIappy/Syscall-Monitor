/********************************************************************************
** Form generated from reading UI file 'filterdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERDIALOG_H
#define UI_FILTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FilterDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QComboBox *comboBox_relation;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox_value;
    QComboBox *comboBox_action;
    QComboBox *comboBox_key;
    QPushButton *pushButton_add;
    QPushButton *pushButton_remove;
    QPushButton *pushButton_apply;
    QTableView *tableView_Filter;

    void setupUi(QDialog *FilterDialog)
    {
        if (FilterDialog->objectName().isEmpty())
            FilterDialog->setObjectName(QString::fromUtf8("FilterDialog"));
        FilterDialog->setWindowModality(Qt::NonModal);
        FilterDialog->resize(800, 450);
        FilterDialog->setMinimumSize(QSize(800, 400));
        FilterDialog->setContextMenuPolicy(Qt::NoContextMenu);
        FilterDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(FilterDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setContentsMargins(8, 8, 8, -1);
        label_2 = new QLabel(FilterDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label = new QLabel(FilterDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        comboBox_relation = new QComboBox(FilterDialog);
        comboBox_relation->setObjectName(QString::fromUtf8("comboBox_relation"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_relation->sizePolicy().hasHeightForWidth());
        comboBox_relation->setSizePolicy(sizePolicy);
        comboBox_relation->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(comboBox_relation, 2, 1, 1, 1);

        label_3 = new QLabel(FilterDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        label_4 = new QLabel(FilterDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 3, 1, 1);

        comboBox_value = new QComboBox(FilterDialog);
        comboBox_value->setObjectName(QString::fromUtf8("comboBox_value"));
        comboBox_value->setEditable(true);

        gridLayout->addWidget(comboBox_value, 2, 2, 1, 1);

        comboBox_action = new QComboBox(FilterDialog);
        comboBox_action->setObjectName(QString::fromUtf8("comboBox_action"));
        sizePolicy.setHeightForWidth(comboBox_action->sizePolicy().hasHeightForWidth());
        comboBox_action->setSizePolicy(sizePolicy);
        comboBox_action->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(comboBox_action, 2, 3, 1, 1);

        comboBox_key = new QComboBox(FilterDialog);
        comboBox_key->setObjectName(QString::fromUtf8("comboBox_key"));

        gridLayout->addWidget(comboBox_key, 2, 0, 1, 1);

        pushButton_add = new QPushButton(FilterDialog);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        sizePolicy.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy);
        pushButton_add->setContextMenuPolicy(Qt::DefaultContextMenu);

        gridLayout->addWidget(pushButton_add, 2, 4, 1, 1);

        pushButton_remove = new QPushButton(FilterDialog);
        pushButton_remove->setObjectName(QString::fromUtf8("pushButton_remove"));
        sizePolicy.setHeightForWidth(pushButton_remove->sizePolicy().hasHeightForWidth());
        pushButton_remove->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_remove, 2, 5, 1, 1);

        pushButton_apply = new QPushButton(FilterDialog);
        pushButton_apply->setObjectName(QString::fromUtf8("pushButton_apply"));
        pushButton_apply->setEnabled(false);
        sizePolicy.setHeightForWidth(pushButton_apply->sizePolicy().hasHeightForWidth());
        pushButton_apply->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_apply, 2, 6, 1, 1);


        verticalLayout->addLayout(gridLayout);

        tableView_Filter = new QTableView(FilterDialog);
        tableView_Filter->setObjectName(QString::fromUtf8("tableView_Filter"));
        tableView_Filter->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_Filter->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_Filter->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        tableView_Filter->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout->addWidget(tableView_Filter);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(FilterDialog);

        QMetaObject::connectSlotsByName(FilterDialog);
    } // setupUi

    void retranslateUi(QDialog *FilterDialog)
    {
        FilterDialog->setWindowTitle(QCoreApplication::translate("FilterDialog", "Event Filter", nullptr));
        label_2->setText(QCoreApplication::translate("FilterDialog", "Relation", nullptr));
        label->setText(QCoreApplication::translate("FilterDialog", "Attribute", nullptr));
        label_3->setText(QCoreApplication::translate("FilterDialog", "Value", nullptr));
        label_4->setText(QCoreApplication::translate("FilterDialog", "Then", nullptr));
        pushButton_add->setText(QCoreApplication::translate("FilterDialog", "Add", nullptr));
        pushButton_remove->setText(QCoreApplication::translate("FilterDialog", "Remove", nullptr));
        pushButton_apply->setText(QCoreApplication::translate("FilterDialog", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilterDialog: public Ui_FilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERDIALOG_H
