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
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QCheckBox *cbVites;
    QCheckBox *cbYakit;
    QCheckBox *cbYas;
    QPushButton *btnListele;
    QPushButton *btnTemizle;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *grpVites;
    QRadioButton *rdManuel;
    QRadioButton *radioButton_2;
    QGroupBox *grpYakit;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *btnAltSecenek;
    QGroupBox *grpYas;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QPushButton *btnCikis;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(570, 551);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(170, 85, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Dialog->setPalette(palette);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 231, 21));
        QPalette palette1;
        QBrush brush2(QColor(170, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        QBrush brush3(QColor(170, 0, 0, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        label->setPalette(palette1);
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        cbVites = new QCheckBox(Dialog);
        cbVites->setObjectName(QString::fromUtf8("cbVites"));
        cbVites->setGeometry(QRect(41, 94, 55, 20));
        cbYakit = new QCheckBox(Dialog);
        cbYakit->setObjectName(QString::fromUtf8("cbYakit"));
        cbYakit->setGeometry(QRect(41, 124, 54, 20));
        cbYas = new QCheckBox(Dialog);
        cbYas->setObjectName(QString::fromUtf8("cbYas"));
        cbYas->setGeometry(QRect(41, 154, 47, 20));
        btnListele = new QPushButton(Dialog);
        btnListele->setObjectName(QString::fromUtf8("btnListele"));
        btnListele->setGeometry(QRect(41, 191, 93, 28));
        btnTemizle = new QPushButton(Dialog);
        btnTemizle->setObjectName(QString::fromUtf8("btnTemizle"));
        btnTemizle->setGeometry(QRect(144, 191, 93, 28));
        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(260, 80, 121, 101));
        grpVites = new QGroupBox(Dialog);
        grpVites->setObjectName(QString::fromUtf8("grpVites"));
        grpVites->setEnabled(false);
        grpVites->setGeometry(QRect(40, 260, 121, 101));
        rdManuel = new QRadioButton(grpVites);
        rdManuel->setObjectName(QString::fromUtf8("rdManuel"));
        rdManuel->setGeometry(QRect(20, 30, 95, 20));
        radioButton_2 = new QRadioButton(grpVites);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(20, 60, 95, 20));
        grpYakit = new QGroupBox(Dialog);
        grpYakit->setObjectName(QString::fromUtf8("grpYakit"));
        grpYakit->setEnabled(false);
        grpYakit->setGeometry(QRect(200, 260, 121, 101));
        radioButton_3 = new QRadioButton(grpYakit);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 40, 95, 20));
        radioButton_4 = new QRadioButton(grpYakit);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(10, 70, 95, 20));
        btnAltSecenek = new QPushButton(Dialog);
        btnAltSecenek->setObjectName(QString::fromUtf8("btnAltSecenek"));
        btnAltSecenek->setGeometry(QRect(280, 390, 211, 31));
        QPalette palette2;
        QBrush brush6(QColor(85, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush7(QColor(170, 170, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush8(QColor(255, 0, 127, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        btnAltSecenek->setPalette(palette2);
        grpYas = new QGroupBox(Dialog);
        grpYas->setObjectName(QString::fromUtf8("grpYas"));
        grpYas->setEnabled(false);
        grpYas->setGeometry(QRect(360, 260, 131, 91));
        radioButton_5 = new QRadioButton(grpYas);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(10, 20, 95, 20));
        radioButton_6 = new QRadioButton(grpYas);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(10, 40, 95, 20));
        radioButton_7 = new QRadioButton(grpYas);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setGeometry(QRect(10, 60, 95, 20));
        btnCikis = new QPushButton(Dialog);
        btnCikis->setObjectName(QString::fromUtf8("btnCikis"));
        btnCikis->setGeometry(QRect(280, 440, 91, 31));

        retranslateUi(Dialog);
        QObject::connect(btnCikis, SIGNAL(clicked()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Ana Se\303\247imlerinizi \304\260\305\237aretleyiniz", nullptr));
        cbVites->setText(QCoreApplication::translate("Dialog", "Vites", nullptr));
        cbYakit->setText(QCoreApplication::translate("Dialog", "Yak\304\261t", nullptr));
        cbYas->setText(QCoreApplication::translate("Dialog", "Ya\305\237", nullptr));
        btnListele->setText(QCoreApplication::translate("Dialog", "Listele", nullptr));
        btnTemizle->setText(QCoreApplication::translate("Dialog", "Temizle", nullptr));
        grpVites->setTitle(QCoreApplication::translate("Dialog", "Vites", nullptr));
        rdManuel->setText(QCoreApplication::translate("Dialog", "Manuel", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Dialog", "Otomatik", nullptr));
        grpYakit->setTitle(QCoreApplication::translate("Dialog", "Yak\304\261t", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Dialog", "Benzin", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Dialog", "Dizel", nullptr));
        btnAltSecenek->setText(QCoreApplication::translate("Dialog", "Alt se\303\247enekleri listele", nullptr));
        grpYas->setTitle(QCoreApplication::translate("Dialog", "Ya\305\237", nullptr));
        radioButton_5->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        radioButton_6->setText(QCoreApplication::translate("Dialog", "1", nullptr));
        radioButton_7->setText(QCoreApplication::translate("Dialog", "2+", nullptr));
        btnCikis->setText(QCoreApplication::translate("Dialog", "\303\207\304\261k\304\261\305\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
