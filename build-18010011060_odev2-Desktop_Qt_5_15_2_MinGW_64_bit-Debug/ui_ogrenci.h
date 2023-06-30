/********************************************************************************
** Form generated from reading UI file 'ogrenci.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OGRENCI_H
#define UI_OGRENCI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Ogrenci
{
public:
    QLabel *label;
    QLabel *label_2;
    QTableView *tbvwOgrenciler;
    QLabel *label_3;
    QLineEdit *lnOgrenciNo;
    QLineEdit *lnOgrenciAd;
    QLabel *label_4;
    QLineEdit *lnOgrenciSoyad;
    QLabel *label_5;
    QPushButton *btnOgrenciYeniKayit;
    QPushButton *btnOgrenciSil;
    QPushButton *btnOgrenciGuncelle;

    void setupUi(QDialog *Ogrenci)
    {
        if (Ogrenci->objectName().isEmpty())
            Ogrenci->setObjectName(QString::fromUtf8("Ogrenci"));
        Ogrenci->resize(784, 556);
        label = new QLabel(Ogrenci);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 20, 251, 51));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label->setPalette(palette);
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Ogrenci);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 80, 151, 31));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        tbvwOgrenciler = new QTableView(Ogrenci);
        tbvwOgrenciler->setObjectName(QString::fromUtf8("tbvwOgrenciler"));
        tbvwOgrenciler->setGeometry(QRect(50, 120, 311, 411));
        label_3 = new QLabel(Ogrenci);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 140, 111, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        lnOgrenciNo = new QLineEdit(Ogrenci);
        lnOgrenciNo->setObjectName(QString::fromUtf8("lnOgrenciNo"));
        lnOgrenciNo->setEnabled(false);
        lnOgrenciNo->setGeometry(QRect(530, 140, 201, 31));
        lnOgrenciAd = new QLineEdit(Ogrenci);
        lnOgrenciAd->setObjectName(QString::fromUtf8("lnOgrenciAd"));
        lnOgrenciAd->setGeometry(QRect(530, 210, 201, 31));
        label_4 = new QLabel(Ogrenci);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(380, 210, 111, 31));
        label_4->setFont(font2);
        lnOgrenciSoyad = new QLineEdit(Ogrenci);
        lnOgrenciSoyad->setObjectName(QString::fromUtf8("lnOgrenciSoyad"));
        lnOgrenciSoyad->setGeometry(QRect(530, 280, 201, 31));
        label_5 = new QLabel(Ogrenci);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(380, 280, 131, 31));
        label_5->setFont(font2);
        btnOgrenciYeniKayit = new QPushButton(Ogrenci);
        btnOgrenciYeniKayit->setObjectName(QString::fromUtf8("btnOgrenciYeniKayit"));
        btnOgrenciYeniKayit->setGeometry(QRect(400, 360, 111, 31));
        btnOgrenciYeniKayit->setFont(font2);
        btnOgrenciSil = new QPushButton(Ogrenci);
        btnOgrenciSil->setObjectName(QString::fromUtf8("btnOgrenciSil"));
        btnOgrenciSil->setGeometry(QRect(590, 360, 111, 31));
        btnOgrenciSil->setFont(font2);
        btnOgrenciGuncelle = new QPushButton(Ogrenci);
        btnOgrenciGuncelle->setObjectName(QString::fromUtf8("btnOgrenciGuncelle"));
        btnOgrenciGuncelle->setGeometry(QRect(500, 430, 111, 31));
        btnOgrenciGuncelle->setFont(font2);

        retranslateUi(Ogrenci);

        QMetaObject::connectSlotsByName(Ogrenci);
    } // setupUi

    void retranslateUi(QDialog *Ogrenci)
    {
        Ogrenci->setWindowTitle(QCoreApplication::translate("Ogrenci", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Ogrenci", "\303\226\304\236RENC\304\260 \304\260\305\236LEMLER\304\260", nullptr));
        label_2->setText(QCoreApplication::translate("Ogrenci", "T\303\274m \303\226\304\237renciler", nullptr));
        label_3->setText(QCoreApplication::translate("Ogrenci", "\303\226\304\237renci No:", nullptr));
        label_4->setText(QCoreApplication::translate("Ogrenci", "\303\226\304\237renci Ad:", nullptr));
        label_5->setText(QCoreApplication::translate("Ogrenci", "\303\226\304\237renci Soyad:", nullptr));
        btnOgrenciYeniKayit->setText(QCoreApplication::translate("Ogrenci", "Yeni Kay\304\261t", nullptr));
        btnOgrenciSil->setText(QCoreApplication::translate("Ogrenci", "Sil", nullptr));
        btnOgrenciGuncelle->setText(QCoreApplication::translate("Ogrenci", "G\303\274ncelle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ogrenci: public Ui_Ogrenci {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OGRENCI_H
