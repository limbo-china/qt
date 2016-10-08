/********************************************************************************
** Form generated from reading UI file 'drag.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAG_H
#define UI_DRAG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dragClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *dragClass)
    {
        if (dragClass->objectName().isEmpty())
            dragClass->setObjectName(QStringLiteral("dragClass"));
        dragClass->resize(600, 400);
        menuBar = new QMenuBar(dragClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        dragClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(dragClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        dragClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(dragClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        dragClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(dragClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        dragClass->setStatusBar(statusBar);

        retranslateUi(dragClass);

        QMetaObject::connectSlotsByName(dragClass);
    } // setupUi

    void retranslateUi(QMainWindow *dragClass)
    {
        dragClass->setWindowTitle(QApplication::translate("dragClass", "drag", 0));
    } // retranslateUi

};

namespace Ui {
    class dragClass: public Ui_dragClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAG_H
