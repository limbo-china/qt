/********************************************************************************
** Form generated from reading UI file 'gotocelldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOTOCELLDIALOG_H
#define UI_GOTOCELLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GotocelldialogClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GotocelldialogClass)
    {
        if (GotocelldialogClass->objectName().isEmpty())
            GotocelldialogClass->setObjectName(QStringLiteral("GotocelldialogClass"));
        GotocelldialogClass->setEnabled(true);
        GotocelldialogClass->resize(314, 80);
        verticalLayout = new QVBoxLayout(GotocelldialogClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(GotocelldialogClass);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(GotocelldialogClass);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(true);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(GotocelldialogClass);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(GotocelldialogClass);

        QMetaObject::connectSlotsByName(GotocelldialogClass);
    } // setupUi

    void retranslateUi(QDialog *GotocelldialogClass)
    {
        GotocelldialogClass->setWindowTitle(QApplication::translate("GotocelldialogClass", "Gotocelldialog", 0));
        label->setText(QApplication::translate("GotocelldialogClass", "&Cell Location:", 0));
    } // retranslateUi

};

namespace Ui {
    class GotocelldialogClass: public Ui_GotocelldialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOTOCELLDIALOG_H
