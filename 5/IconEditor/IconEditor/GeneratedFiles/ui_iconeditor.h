/********************************************************************************
** Form generated from reading UI file 'iconeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICONEDITOR_H
#define UI_ICONEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup> 
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IconEditorClass
{
public:

    void setupUi(QWidget *IconEditorClass)
    {
        if (IconEditorClass->objectName().isEmpty())
            IconEditorClass->setObjectName(QStringLiteral("IconEditorClass"));
        IconEditorClass->resize(600, 400);

        retranslateUi(IconEditorClass);

        QMetaObject::connectSlotsByName(IconEditorClass);
    } // setupUi

    void retranslateUi(QWidget *IconEditorClass)
    {
        IconEditorClass->setWindowTitle(QApplication::translate("IconEditorClass", "IconEditor", 0));
    } // retranslateUi

};

namespace Ui {
    class IconEditorClass: public Ui_IconEditorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICONEDITOR_H
