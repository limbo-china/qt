/********************************************************************************
** Form generated from reading UI file 'projectlist.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTLIST_H
#define UI_PROJECTLIST_H

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

class Ui_ProjectListClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ProjectListClass)
    {
        if (ProjectListClass->objectName().isEmpty())
            ProjectListClass->setObjectName(QStringLiteral("ProjectListClass"));
        ProjectListClass->resize(600, 400);
        menuBar = new QMenuBar(ProjectListClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        ProjectListClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ProjectListClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ProjectListClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ProjectListClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ProjectListClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ProjectListClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ProjectListClass->setStatusBar(statusBar);

        retranslateUi(ProjectListClass);

        QMetaObject::connectSlotsByName(ProjectListClass);
    } // setupUi

    void retranslateUi(QMainWindow *ProjectListClass)
    {
        ProjectListClass->setWindowTitle(QApplication::translate("ProjectListClass", "ProjectList", 0));
    } // retranslateUi

};

namespace Ui {
    class ProjectListClass: public Ui_ProjectListClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTLIST_H
