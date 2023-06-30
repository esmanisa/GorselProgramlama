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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QGroupBox *grpEgitim;
    QRadioButton *rdBtnLisans;
    QRadioButton *rdBtnLisanustu;
    QGroupBox *grpSinif;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *rdbtnSinif1;
    QRadioButton *rdbtnSinif2;
    QRadioButton *rdbtnSinif3;
    QRadioButton *rdbtnSinif4;
    QGroupBox *grpDerslerLisans;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *cbDersAIIT;
    QCheckBox *cbTurkDiliDers;
    QCheckBox *cbISGDers;
    QGroupBox *grpDurum;
    QRadioButton *rdbtnDers;
    QRadioButton *rdbtnTez;
    QGroupBox *grpDerslerLUstu;
    QCheckBox *cbSecmeliDers;
    QCheckBox *cbSeminerDersi;
    QCheckBox *cbTeDersi;
    QWidget *widget2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lneditName;
    QLineEdit *lneditSurname;
    QLineEdit *lneditDepartment;
    QWidget *widget4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *btnYazdir;
    QPushButton *btnSorgula;
    QPushButton *btnDurumYazdir;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(543, 558);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 10, 301, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        grpEgitim = new QGroupBox(Dialog);
        grpEgitim->setObjectName(QString::fromUtf8("grpEgitim"));
        grpEgitim->setGeometry(QRect(310, 110, 141, 91));
        rdBtnLisans = new QRadioButton(grpEgitim);
        rdBtnLisans->setObjectName(QString::fromUtf8("rdBtnLisans"));
        rdBtnLisans->setGeometry(QRect(20, 30, 95, 20));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        rdBtnLisans->setPalette(palette);
        rdBtnLisanustu = new QRadioButton(grpEgitim);
        rdBtnLisanustu->setObjectName(QString::fromUtf8("rdBtnLisanustu"));
        rdBtnLisanustu->setGeometry(QRect(20, 60, 95, 20));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        rdBtnLisanustu->setPalette(palette1);
        grpSinif = new QGroupBox(Dialog);
        grpSinif->setObjectName(QString::fromUtf8("grpSinif"));
        grpSinif->setEnabled(false);
        grpSinif->setGeometry(QRect(10, 220, 161, 131));
        widget = new QWidget(grpSinif);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 101, 103));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        rdbtnSinif1 = new QRadioButton(widget);
        rdbtnSinif1->setObjectName(QString::fromUtf8("rdbtnSinif1"));

        verticalLayout_4->addWidget(rdbtnSinif1);

        rdbtnSinif2 = new QRadioButton(widget);
        rdbtnSinif2->setObjectName(QString::fromUtf8("rdbtnSinif2"));

        verticalLayout_4->addWidget(rdbtnSinif2);

        rdbtnSinif3 = new QRadioButton(widget);
        rdbtnSinif3->setObjectName(QString::fromUtf8("rdbtnSinif3"));

        verticalLayout_4->addWidget(rdbtnSinif3);

        rdbtnSinif4 = new QRadioButton(widget);
        rdbtnSinif4->setObjectName(QString::fromUtf8("rdbtnSinif4"));

        verticalLayout_4->addWidget(rdbtnSinif4);

        grpDerslerLisans = new QGroupBox(Dialog);
        grpDerslerLisans->setObjectName(QString::fromUtf8("grpDerslerLisans"));
        grpDerslerLisans->setEnabled(false);
        grpDerslerLisans->setGeometry(QRect(190, 220, 161, 131));
        widget1 = new QWidget(grpDerslerLisans);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 30, 153, 76));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        cbDersAIIT = new QCheckBox(widget1);
        cbDersAIIT->setObjectName(QString::fromUtf8("cbDersAIIT"));

        verticalLayout_3->addWidget(cbDersAIIT);

        cbTurkDiliDers = new QCheckBox(widget1);
        cbTurkDiliDers->setObjectName(QString::fromUtf8("cbTurkDiliDers"));

        verticalLayout_3->addWidget(cbTurkDiliDers);

        cbISGDers = new QCheckBox(widget1);
        cbISGDers->setObjectName(QString::fromUtf8("cbISGDers"));

        verticalLayout_3->addWidget(cbISGDers);

        grpDurum = new QGroupBox(Dialog);
        grpDurum->setObjectName(QString::fromUtf8("grpDurum"));
        grpDurum->setEnabled(false);
        grpDurum->setGeometry(QRect(10, 370, 131, 91));
        rdbtnDers = new QRadioButton(grpDurum);
        rdbtnDers->setObjectName(QString::fromUtf8("rdbtnDers"));
        rdbtnDers->setGeometry(QRect(10, 20, 95, 20));
        rdbtnTez = new QRadioButton(grpDurum);
        rdbtnTez->setObjectName(QString::fromUtf8("rdbtnTez"));
        rdbtnTez->setGeometry(QRect(10, 50, 95, 20));
        grpDerslerLUstu = new QGroupBox(Dialog);
        grpDerslerLUstu->setObjectName(QString::fromUtf8("grpDerslerLUstu"));
        grpDerslerLUstu->setEnabled(false);
        grpDerslerLUstu->setGeometry(QRect(170, 370, 191, 91));
        cbSecmeliDers = new QCheckBox(grpDerslerLUstu);
        cbSecmeliDers->setObjectName(QString::fromUtf8("cbSecmeliDers"));
        cbSecmeliDers->setGeometry(QRect(10, 20, 121, 20));
        cbSeminerDersi = new QCheckBox(grpDerslerLUstu);
        cbSeminerDersi->setObjectName(QString::fromUtf8("cbSeminerDersi"));
        cbSeminerDersi->setGeometry(QRect(10, 40, 131, 20));
        cbTeDersi = new QCheckBox(grpDerslerLUstu);
        cbTeDersi->setObjectName(QString::fromUtf8("cbTeDersi"));
        cbTeDersi->setGeometry(QRect(10, 60, 111, 20));
        widget2 = new QWidget(Dialog);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(20, 110, 81, 91));
        verticalLayout = new QVBoxLayout(widget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        QBrush brush3(QColor(255, 0, 0, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        label_2->setPalette(palette2);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        label_3->setPalette(palette3);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_4->setPalette(palette4);

        verticalLayout->addWidget(label_4);

        widget3 = new QWidget(Dialog);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(120, 110, 141, 91));
        verticalLayout_2 = new QVBoxLayout(widget3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lneditName = new QLineEdit(widget3);
        lneditName->setObjectName(QString::fromUtf8("lneditName"));

        verticalLayout_2->addWidget(lneditName);

        lneditSurname = new QLineEdit(widget3);
        lneditSurname->setObjectName(QString::fromUtf8("lneditSurname"));

        verticalLayout_2->addWidget(lneditSurname);

        lneditDepartment = new QLineEdit(widget3);
        lneditDepartment->setObjectName(QString::fromUtf8("lneditDepartment"));

        verticalLayout_2->addWidget(lneditDepartment);

        widget4 = new QWidget(Dialog);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(390, 380, 151, 181));
        verticalLayout_5 = new QVBoxLayout(widget4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        btnYazdir = new QPushButton(widget4);
        btnYazdir->setObjectName(QString::fromUtf8("btnYazdir"));

        verticalLayout_5->addWidget(btnYazdir);

        btnSorgula = new QPushButton(widget4);
        btnSorgula->setObjectName(QString::fromUtf8("btnSorgula"));

        verticalLayout_5->addWidget(btnSorgula);

        btnDurumYazdir = new QPushButton(widget4);
        btnDurumYazdir->setObjectName(QString::fromUtf8("btnDurumYazdir"));

        verticalLayout_5->addWidget(btnDurumYazdir);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\303\226\304\237renci Bilgilerini Alma Aray\303\274z\303\274", nullptr));
        grpEgitim->setTitle(QCoreApplication::translate("Dialog", "E\304\237itim", nullptr));
        rdBtnLisans->setText(QCoreApplication::translate("Dialog", "Lisans", nullptr));
        rdBtnLisanustu->setText(QCoreApplication::translate("Dialog", "Lisan\303\274st\303\274", nullptr));
        grpSinif->setTitle(QCoreApplication::translate("Dialog", "S\304\261n\304\261f", nullptr));
        rdbtnSinif1->setText(QCoreApplication::translate("Dialog", "1. S\304\261n\304\261f", nullptr));
        rdbtnSinif2->setText(QCoreApplication::translate("Dialog", "2. S\304\261n\304\261f", nullptr));
        rdbtnSinif3->setText(QCoreApplication::translate("Dialog", "3. S\304\261n\304\261f", nullptr));
        rdbtnSinif4->setText(QCoreApplication::translate("Dialog", "4. S\304\261n\304\261f", nullptr));
        grpDerslerLisans->setTitle(QCoreApplication::translate("Dialog", "Al\304\261nan Zorunlu Dersler", nullptr));
        cbDersAIIT->setText(QCoreApplication::translate("Dialog", "A\304\260\304\260T", nullptr));
        cbTurkDiliDers->setText(QCoreApplication::translate("Dialog", "T\303\274rk Dili", nullptr));
        cbISGDers->setText(QCoreApplication::translate("Dialog", "\304\260\305\237 Sa\304\237l\304\261\304\237\304\261 ve G\303\274venli\304\237i", nullptr));
        grpDurum->setTitle(QCoreApplication::translate("Dialog", "Durum", nullptr));
        rdbtnDers->setText(QCoreApplication::translate("Dialog", "Ders", nullptr));
        rdbtnTez->setText(QCoreApplication::translate("Dialog", "Tez", nullptr));
        grpDerslerLUstu->setTitle(QCoreApplication::translate("Dialog", "Al\304\261nan Zorunlu Dersler", nullptr));
        cbSecmeliDers->setText(QCoreApplication::translate("Dialog", "Se\303\247meli Ders", nullptr));
        cbSeminerDersi->setText(QCoreApplication::translate("Dialog", "Seminer Dersi", nullptr));
        cbTeDersi->setText(QCoreApplication::translate("Dialog", "Tez Dersi", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Ad:", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Soyad", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "B\303\266l\303\274m:", nullptr));
        btnYazdir->setText(QCoreApplication::translate("Dialog", "Bilgileri Yazd\304\261r", nullptr));
        btnSorgula->setText(QCoreApplication::translate("Dialog", "Mezuniyet Sorgula", nullptr));
        btnDurumYazdir->setText(QCoreApplication::translate("Dialog", "\303\226\304\237renci Durum Yazd\304\261r", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
