/********************************************************************************
** Form generated from reading UI file 'threadsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREADSDIALOG_H
#define UI_THREADSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThreadsDialogClass
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *threadAButton;
    QPushButton *threadBButton;
    QPushButton *quitButton;

    void setupUi(QDialog *ThreadsDialogClass)
    {
        if (ThreadsDialogClass->objectName().isEmpty())
            ThreadsDialogClass->setObjectName(QStringLiteral("ThreadsDialogClass"));
        ThreadsDialogClass->resize(403, 126);
        layoutWidget = new QWidget(ThreadsDialogClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 239, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        threadAButton = new QPushButton(layoutWidget);
        threadAButton->setObjectName(QStringLiteral("threadAButton"));

        horizontalLayout->addWidget(threadAButton);

        threadBButton = new QPushButton(layoutWidget);
        threadBButton->setObjectName(QStringLiteral("threadBButton"));

        horizontalLayout->addWidget(threadBButton);

        quitButton = new QPushButton(layoutWidget);
        quitButton->setObjectName(QStringLiteral("quitButton"));

        horizontalLayout->addWidget(quitButton);


        retranslateUi(ThreadsDialogClass);
        QObject::connect(quitButton, SIGNAL(clicked()), ThreadsDialogClass, SLOT(close()));

        quitButton->setDefault(true);


        QMetaObject::connectSlotsByName(ThreadsDialogClass);
    } // setupUi

    void retranslateUi(QDialog *ThreadsDialogClass)
    {
        ThreadsDialogClass->setWindowTitle(QApplication::translate("ThreadsDialogClass", "Threads", 0));
        threadAButton->setText(QApplication::translate("ThreadsDialogClass", "Start A", 0));
        threadBButton->setText(QApplication::translate("ThreadsDialogClass", "Start B", 0));
        quitButton->setText(QApplication::translate("ThreadsDialogClass", "Quit", 0));
    } // retranslateUi

};

namespace Ui {
    class ThreadsDialogClass: public Ui_ThreadsDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREADSDIALOG_H
