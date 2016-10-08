/********************************************************************************
** Form generated from reading UI file 'qdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIALOG_H
#define UI_QDIALOG_H

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

class Ui_QDialogClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QDialogClass)
    {
        if (QDialogClass->objectName().isEmpty())
            QDialogClass->setObjectName(QStringLiteral("QDialogClass"));
        QDialogClass->resize(600, 400);
        menuBar = new QMenuBar(QDialogClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QDialogClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QDialogClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QDialogClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QDialogClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QDialogClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QDialogClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QDialogClass->setStatusBar(statusBar);

        retranslateUi(QDialogClass);

        QMetaObject::connectSlotsByName(QDialogClass);
    } // setupUi

    void retranslateUi(QMainWindow *QDialogClass)
    {
        QDialogClass->setWindowTitle(QApplication::translate("QDialogClass", "QDialog", 0));
    } // retranslateUi

};

namespace Ui {
    class QDialogClass: public Ui_QDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIALOG_H
