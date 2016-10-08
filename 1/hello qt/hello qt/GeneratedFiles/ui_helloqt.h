/********************************************************************************
** Form generated from reading UI file 'helloqt.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOQT_H
#define UI_HELLOQT_H

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

class Ui_helloqtClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *helloqtClass)
    {
        if (helloqtClass->objectName().isEmpty())
            helloqtClass->setObjectName(QStringLiteral("helloqtClass"));
        helloqtClass->resize(600, 400);
        menuBar = new QMenuBar(helloqtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        helloqtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(helloqtClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        helloqtClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(helloqtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        helloqtClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(helloqtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        helloqtClass->setStatusBar(statusBar);

        retranslateUi(helloqtClass);

        QMetaObject::connectSlotsByName(helloqtClass);
    } // setupUi

    void retranslateUi(QMainWindow *helloqtClass)
    {
        helloqtClass->setWindowTitle(QApplication::translate("helloqtClass", "helloqt", 0));
    } // retranslateUi

};

namespace Ui {
    class helloqtClass: public Ui_helloqtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOQT_H
