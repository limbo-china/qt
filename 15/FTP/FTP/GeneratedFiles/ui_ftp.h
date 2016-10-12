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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FTPClass
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *selectLabel;
    QLineEdit *fileNameLineEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *selectPushButton;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *uploadProgressBar;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *uploadPushButton;
    QListView *infoListView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FTPClass)
    {
        if (FTPClass->objectName().isEmpty())
            FTPClass->setObjectName(QStringLiteral("FTPClass"));
        FTPClass->resize(401, 363);
        centralWidget = new QWidget(FTPClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(31, 41, 336, 256));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        selectLabel = new QLabel(widget);
        selectLabel->setObjectName(QStringLiteral("selectLabel"));

        horizontalLayout->addWidget(selectLabel);

        fileNameLineEdit = new QLineEdit(widget);
        fileNameLineEdit->setObjectName(QStringLiteral("fileNameLineEdit"));

        horizontalLayout->addWidget(fileNameLineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        selectPushButton = new QPushButton(widget);
        selectPushButton->setObjectName(QStringLiteral("selectPushButton"));

        horizontalLayout->addWidget(selectPushButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        uploadProgressBar = new QProgressBar(widget);
        uploadProgressBar->setObjectName(QStringLiteral("uploadProgressBar"));
        uploadProgressBar->setMaximumSize(QSize(16777215, 16777215));
        uploadProgressBar->setValue(0);

        horizontalLayout_2->addWidget(uploadProgressBar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        uploadPushButton = new QPushButton(widget);
        uploadPushButton->setObjectName(QStringLiteral("uploadPushButton"));

        horizontalLayout_2->addWidget(uploadPushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        infoListView = new QListView(widget);
        infoListView->setObjectName(QStringLiteral("infoListView"));

        verticalLayout->addWidget(infoListView);

        FTPClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FTPClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 401, 21));
        FTPClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FTPClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FTPClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FTPClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FTPClass->setStatusBar(statusBar);

        retranslateUi(FTPClass);

        QMetaObject::connectSlotsByName(FTPClass);
    } // setupUi

    void retranslateUi(QMainWindow *FTPClass)
    {
        FTPClass->setWindowTitle(QApplication::translate("FTPClass", "FTP", 0));
        selectLabel->setText(QApplication::translate("FTPClass", "selectFile:", 0));
        selectPushButton->setText(QApplication::translate("FTPClass", "selectFile", 0));
        uploadPushButton->setText(QApplication::translate("FTPClass", "upload", 0));
    } // retranslateUi

};

namespace Ui {
    class FTPClass: public Ui_FTPClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FTP_H
