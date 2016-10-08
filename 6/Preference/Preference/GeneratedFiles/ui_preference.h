/********************************************************************************
** Form generated from reading UI file 'preference.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCE_H
#define UI_PREFERENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferenceClass
{
public:
    QListWidget *listWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_2;
    QWidget *page_2;
    QLabel *label;
    QWidget *page_3;
    QLabel *label_3;

    void setupUi(QWidget *PreferenceClass)
    {
        if (PreferenceClass->objectName().isEmpty())
            PreferenceClass->setObjectName(QStringLiteral("PreferenceClass"));
        PreferenceClass->resize(771, 520);
        listWidget = new QListWidget(PreferenceClass);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(60, 10, 302, 192));
        widget = new QWidget(PreferenceClass);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 210, 611, 194));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 80, 54, 12));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 80, 54, 12));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 70, 54, 12));
        stackedWidget->addWidget(page_3);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(PreferenceClass);
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PreferenceClass);
    } // setupUi

    void retranslateUi(QWidget *PreferenceClass)
    {
        PreferenceClass->setWindowTitle(QApplication::translate("PreferenceClass", "Preference", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("PreferenceClass", "1", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("PreferenceClass", "2", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("PreferenceClass", "3", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_2->setText(QApplication::translate("PreferenceClass", "1", 0));
        label->setText(QApplication::translate("PreferenceClass", "2", 0));
        label_3->setText(QApplication::translate("PreferenceClass", "3", 0));
    } // retranslateUi

};

namespace Ui {
    class PreferenceClass: public Ui_PreferenceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCE_H
