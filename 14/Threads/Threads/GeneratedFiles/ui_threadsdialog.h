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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThreadsDialogClass
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *threadAButton;
    QPushButton *threadBButton;
    QPushButton *quitButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *producerButton;
    QPushButton *consumerButton;

    void setupUi(QDialog *ThreadsDialogClass)
    {
        if (ThreadsDialogClass->objectName().isEmpty())
            ThreadsDialogClass->setObjectName(QStringLiteral("ThreadsDialogClass"));
        ThreadsDialogClass->resize(379, 135);
        widget = new QWidget(ThreadsDialogClass);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 289, 104));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        threadAButton = new QPushButton(widget);
        threadAButton->setObjectName(QStringLiteral("threadAButton"));

        horizontalLayout->addWidget(threadAButton);

        threadBButton = new QPushButton(widget);
        threadBButton->setObjectName(QStringLiteral("threadBButton"));

        horizontalLayout->addWidget(threadBButton);

        quitButton = new QPushButton(widget);
        quitButton->setObjectName(QStringLiteral("quitButton"));

        horizontalLayout->addWidget(quitButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(17, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        producerButton = new QPushButton(widget);
        producerButton->setObjectName(QStringLiteral("producerButton"));

        horizontalLayout_2->addWidget(producerButton);

        consumerButton = new QPushButton(widget);
        consumerButton->setObjectName(QStringLiteral("consumerButton"));

        horizontalLayout_2->addWidget(consumerButton);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);


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
        producerButton->setText(QApplication::translate("ThreadsDialogClass", "producer", 0));
        consumerButton->setText(QApplication::translate("ThreadsDialogClass", "consumer", 0));
    } // retranslateUi

};

namespace Ui {
    class ThreadsDialogClass: public Ui_ThreadsDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREADSDIALOG_H
