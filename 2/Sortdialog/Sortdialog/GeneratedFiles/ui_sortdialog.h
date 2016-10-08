/********************************************************************************
** Form generated from reading UI file 'sortdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTDIALOG_H
#define UI_SORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SortdialogClass
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *primaryGroupBox;
    QGridLayout *gridLayout;
    QLabel *primaryColumnLabel;
    QComboBox *primaryColumnCombo;
    QSpacerItem *horizontalSpacer;
    QLabel *primaryOrderLabel;
    QComboBox *primaryOrderCombo;
    QVBoxLayout *verticalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *verticalSpacer;
    QPushButton *moreButton;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *secondaryGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *secondaryColumnLabel;
    QComboBox *secondaryColumnCombo;
    QSpacerItem *horizontalSpacer_2;
    QLabel *secondaryOrderLabel;
    QComboBox *secondaryOrderCombo;
    QGroupBox *tertiaryGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *tertiaryColumnLabel;
    QComboBox *tertiaryColumnCombo;
    QSpacerItem *horizontalSpacer_3;
    QLabel *tertiaryOrderLabel;
    QComboBox *tertiaryOrderCombo;

    void setupUi(QDialog *SortdialogClass)
    {
        if (SortdialogClass->objectName().isEmpty())
            SortdialogClass->setObjectName(QStringLiteral("SortdialogClass"));
        SortdialogClass->resize(379, 386);
        gridLayout_4 = new QGridLayout(SortdialogClass);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        primaryGroupBox = new QGroupBox(SortdialogClass);
        primaryGroupBox->setObjectName(QStringLiteral("primaryGroupBox"));
        gridLayout = new QGridLayout(primaryGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        primaryColumnLabel = new QLabel(primaryGroupBox);
        primaryColumnLabel->setObjectName(QStringLiteral("primaryColumnLabel"));

        gridLayout->addWidget(primaryColumnLabel, 0, 0, 1, 1);

        primaryColumnCombo = new QComboBox(primaryGroupBox);
        primaryColumnCombo->setObjectName(QStringLiteral("primaryColumnCombo"));

        gridLayout->addWidget(primaryColumnCombo, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(96, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        primaryOrderLabel = new QLabel(primaryGroupBox);
        primaryOrderLabel->setObjectName(QStringLiteral("primaryOrderLabel"));

        gridLayout->addWidget(primaryOrderLabel, 1, 0, 1, 1);

        primaryOrderCombo = new QComboBox(primaryGroupBox);
        primaryOrderCombo->setObjectName(QStringLiteral("primaryOrderCombo"));

        gridLayout->addWidget(primaryOrderCombo, 1, 1, 1, 2);


        gridLayout_4->addWidget(primaryGroupBox, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        okButton = new QPushButton(SortdialogClass);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setAutoDefault(false);

        verticalLayout->addWidget(okButton);

        cancelButton = new QPushButton(SortdialogClass);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        verticalLayout->addWidget(cancelButton);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        moreButton = new QPushButton(SortdialogClass);
        moreButton->setObjectName(QStringLiteral("moreButton"));
        moreButton->setCheckable(true);

        verticalLayout->addWidget(moreButton);


        gridLayout_4->addLayout(verticalLayout, 0, 1, 2, 1);

        verticalSpacer_2 = new QSpacerItem(20, 74, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 1, 0, 1, 1);

        secondaryGroupBox = new QGroupBox(SortdialogClass);
        secondaryGroupBox->setObjectName(QStringLiteral("secondaryGroupBox"));
        gridLayout_2 = new QGridLayout(secondaryGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        secondaryColumnLabel = new QLabel(secondaryGroupBox);
        secondaryColumnLabel->setObjectName(QStringLiteral("secondaryColumnLabel"));

        gridLayout_2->addWidget(secondaryColumnLabel, 0, 0, 1, 1);

        secondaryColumnCombo = new QComboBox(secondaryGroupBox);
        secondaryColumnCombo->setObjectName(QStringLiteral("secondaryColumnCombo"));

        gridLayout_2->addWidget(secondaryColumnCombo, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        secondaryOrderLabel = new QLabel(secondaryGroupBox);
        secondaryOrderLabel->setObjectName(QStringLiteral("secondaryOrderLabel"));

        gridLayout_2->addWidget(secondaryOrderLabel, 1, 0, 1, 1);

        secondaryOrderCombo = new QComboBox(secondaryGroupBox);
        secondaryOrderCombo->setObjectName(QStringLiteral("secondaryOrderCombo"));

        gridLayout_2->addWidget(secondaryOrderCombo, 1, 1, 1, 2);


        gridLayout_4->addWidget(secondaryGroupBox, 2, 0, 1, 1);

        tertiaryGroupBox = new QGroupBox(SortdialogClass);
        tertiaryGroupBox->setObjectName(QStringLiteral("tertiaryGroupBox"));
        gridLayout_3 = new QGridLayout(tertiaryGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tertiaryColumnLabel = new QLabel(tertiaryGroupBox);
        tertiaryColumnLabel->setObjectName(QStringLiteral("tertiaryColumnLabel"));

        gridLayout_3->addWidget(tertiaryColumnLabel, 0, 0, 1, 1);

        tertiaryColumnCombo = new QComboBox(tertiaryGroupBox);
        tertiaryColumnCombo->setObjectName(QStringLiteral("tertiaryColumnCombo"));

        gridLayout_3->addWidget(tertiaryColumnCombo, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        tertiaryOrderLabel = new QLabel(tertiaryGroupBox);
        tertiaryOrderLabel->setObjectName(QStringLiteral("tertiaryOrderLabel"));

        gridLayout_3->addWidget(tertiaryOrderLabel, 1, 0, 1, 1);

        tertiaryOrderCombo = new QComboBox(tertiaryGroupBox);
        tertiaryOrderCombo->setObjectName(QStringLiteral("tertiaryOrderCombo"));

        gridLayout_3->addWidget(tertiaryOrderCombo, 1, 1, 1, 2);


        gridLayout_4->addWidget(tertiaryGroupBox, 3, 0, 1, 1);

        QWidget::setTabOrder(primaryColumnCombo, primaryOrderCombo);
        QWidget::setTabOrder(primaryOrderCombo, secondaryColumnCombo);
        QWidget::setTabOrder(secondaryColumnCombo, secondaryOrderCombo);
        QWidget::setTabOrder(secondaryOrderCombo, tertiaryColumnCombo);
        QWidget::setTabOrder(tertiaryColumnCombo, tertiaryOrderCombo);
        QWidget::setTabOrder(tertiaryOrderCombo, okButton);
        QWidget::setTabOrder(okButton, cancelButton);
        QWidget::setTabOrder(cancelButton, moreButton);

        retranslateUi(SortdialogClass);
        QObject::connect(okButton, SIGNAL(clicked()), SortdialogClass, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), SortdialogClass, SLOT(reject()));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), secondaryGroupBox, SLOT(setVisible(bool)));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), tertiaryGroupBox, SLOT(setVisible(bool)));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), SortdialogClass, SLOT(setMoreButtonText(bool)));

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(SortdialogClass);
    } // setupUi

    void retranslateUi(QDialog *SortdialogClass)
    {
        SortdialogClass->setWindowTitle(QApplication::translate("SortdialogClass", "Sortdialog", 0));
        primaryGroupBox->setTitle(QApplication::translate("SortdialogClass", "&Primary Key", 0));
        primaryColumnLabel->setText(QApplication::translate("SortdialogClass", "Column:", 0));
        primaryColumnCombo->clear();
        primaryColumnCombo->insertItems(0, QStringList()
         << QApplication::translate("SortdialogClass", "None", 0)
        );
        primaryOrderLabel->setText(QApplication::translate("SortdialogClass", "Order:", 0));
        primaryOrderCombo->clear();
        primaryOrderCombo->insertItems(0, QStringList()
         << QApplication::translate("SortdialogClass", "Ascending", 0)
         << QApplication::translate("SortdialogClass", "Descending", 0)
        );
        okButton->setText(QApplication::translate("SortdialogClass", "OK", 0));
        cancelButton->setText(QApplication::translate("SortdialogClass", "CANCEL", 0));
        moreButton->setText(QApplication::translate("SortdialogClass", "&More>>", 0));
        secondaryGroupBox->setTitle(QApplication::translate("SortdialogClass", "&Secondary Key", 0));
        secondaryColumnLabel->setText(QApplication::translate("SortdialogClass", "Column:", 0));
        secondaryColumnCombo->clear();
        secondaryColumnCombo->insertItems(0, QStringList()
         << QApplication::translate("SortdialogClass", "None", 0)
        );
        secondaryOrderLabel->setText(QApplication::translate("SortdialogClass", "Order:", 0));
        secondaryOrderCombo->clear();
        secondaryOrderCombo->insertItems(0, QStringList()
         << QApplication::translate("SortdialogClass", "Ascending", 0)
         << QApplication::translate("SortdialogClass", "Descending", 0)
        );
        tertiaryGroupBox->setTitle(QApplication::translate("SortdialogClass", "&Tertiary Key", 0));
        tertiaryColumnLabel->setText(QApplication::translate("SortdialogClass", "Column:", 0));
        tertiaryColumnCombo->clear();
        tertiaryColumnCombo->insertItems(0, QStringList()
         << QApplication::translate("SortdialogClass", "None", 0)
        );
        tertiaryOrderLabel->setText(QApplication::translate("SortdialogClass", "Order:", 0));
        tertiaryOrderCombo->clear();
        tertiaryOrderCombo->insertItems(0, QStringList()
         << QApplication::translate("SortdialogClass", "Ascending", 0)
         << QApplication::translate("SortdialogClass", "Descending", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class SortdialogClass: public Ui_SortdialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTDIALOG_H
