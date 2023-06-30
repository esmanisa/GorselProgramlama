/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *label_5;
    QLineEdit *lnYaz;
    QPushButton *btnUygula;
    QLabel *lblGoster;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QFontComboBox *fontComboBox;
    QSpinBox *spinSize;
    QComboBox *comboRenk;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *cbBold;
    QCheckBox *cbItalik;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(477, 442);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 40, 271, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 280, 111, 16));
        lnYaz = new QLineEdit(Dialog);
        lnYaz->setObjectName(QString::fromUtf8("lnYaz"));
        lnYaz->setGeometry(QRect(170, 270, 231, 31));
        btnUygula = new QPushButton(Dialog);
        btnUygula->setObjectName(QString::fromUtf8("btnUygula"));
        btnUygula->setGeometry(QRect(160, 320, 93, 28));
        lblGoster = new QLabel(Dialog);
        lblGoster->setObjectName(QString::fromUtf8("lblGoster"));
        lblGoster->setEnabled(false);
        lblGoster->setGeometry(QRect(90, 360, 271, 61));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 100, 111, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(190, 100, 228, 101));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        fontComboBox = new QFontComboBox(layoutWidget1);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));

        verticalLayout_2->addWidget(fontComboBox);

        spinSize = new QSpinBox(layoutWidget1);
        spinSize->setObjectName(QString::fromUtf8("spinSize"));
        spinSize->setMinimum(5);

        verticalLayout_2->addWidget(spinSize);

        comboRenk = new QComboBox(layoutWidget1);
        comboRenk->addItem(QString());
        comboRenk->addItem(QString());
        comboRenk->addItem(QString());
        comboRenk->addItem(QString());
        comboRenk->addItem(QString());
        comboRenk->addItem(QString());
        comboRenk->addItem(QString());
        comboRenk->addItem(QString());
        comboRenk->addItem(QString());
        comboRenk->setObjectName(QString::fromUtf8("comboRenk"));

        verticalLayout_2->addWidget(comboRenk);

        layoutWidget2 = new QWidget(Dialog);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(120, 220, 181, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cbBold = new QCheckBox(layoutWidget2);
        cbBold->setObjectName(QString::fromUtf8("cbBold"));

        horizontalLayout->addWidget(cbBold);

        cbItalik = new QCheckBox(layoutWidget2);
        cbItalik->setObjectName(QString::fromUtf8("cbItalik"));

        horizontalLayout->addWidget(cbItalik);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Yaz\304\261 Bi\303\247imlendirme Aray\303\274z\303\274", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "Yaz\304\261 Giriniz: ", nullptr));
        btnUygula->setText(QCoreApplication::translate("Dialog", "Uygula", nullptr));
        lblGoster->setText(QString());
        label_2->setText(QCoreApplication::translate("Dialog", "Yaz\304\261 Tipi Fontu", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Yaz\304\261 Tipi B\303\274y\303\274kl\303\274\304\237\303\274", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Renk", nullptr));
        comboRenk->setItemText(0, QCoreApplication::translate("Dialog", "red", nullptr));
        comboRenk->setItemText(1, QCoreApplication::translate("Dialog", "gray", nullptr));
        comboRenk->setItemText(2, QCoreApplication::translate("Dialog", "darkMagenta", nullptr));
        comboRenk->setItemText(3, QCoreApplication::translate("Dialog", "green", nullptr));
        comboRenk->setItemText(4, QCoreApplication::translate("Dialog", "blue", nullptr));
        comboRenk->setItemText(5, QCoreApplication::translate("Dialog", "yellow", nullptr));
        comboRenk->setItemText(6, QCoreApplication::translate("Dialog", "cyan", nullptr));
        comboRenk->setItemText(7, QCoreApplication::translate("Dialog", "magenta", nullptr));
        comboRenk->setItemText(8, QCoreApplication::translate("Dialog", "darkCyan", nullptr));

        cbBold->setText(QCoreApplication::translate("Dialog", "Bold", nullptr));
        cbItalik->setText(QCoreApplication::translate("Dialog", "\304\260talik", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
