/********************************************************************************
** Form generated from reading UI file 'ftp.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FTP_H
#define UI_FTP_H

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

class Ui_FTPClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FTPClass)
    {
        if (FTPClass->objectName().isEmpty())
            FTPClass->setObjectName(QStringLiteral("FTPClass"));
        FTPClass->resize(600, 400);
        menuBar = new QMenuBar(FTPClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        FTPClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FTPClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FTPClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(FTPClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        FTPClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(FTPClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FTPClass->setStatusBar(statusBar);

        retranslateUi(FTPClass);

        QMetaObject::connectSlotsByName(FTPClass);
    } // setupUi

    void retranslateUi(QMainWindow *FTPClass)
    {
        FTPClass->setWindowTitle(QApplication::translate("FTPClass", "FTP", 0));
    } // retranslateUi

};

namespace Ui {
    class FTPClass: public Ui_FTPClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FTP_H
