/********************************************************************************
** Form generated from reading UI file 'dersler.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DERSLER_H
#define UI_DERSLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Dersler
{
public:
    QLabel *label;
    QTableView *tbvwDersler;
    QTableView *tbvwDersOgrencileri;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lnDersKod;
    QLineEdit *lnDersAd;
    QPushButton *btnDersYenKayit;
    QPushButton *btnDersSil;
    QPushButton *btnDersGuncelle;

    void setupUi(QDialog *Dersler)
    {
        if (Dersler->objectName().isEmpty())
            Dersler->setObjectName(QString::fromUtf8("Dersler"));
        Dersler->resize(800, 591);
        label = new QLabel(Dersler);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 30, 181, 31));
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
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        tbvwDersler = new QTableView(Dersler);
        tbvwDersler->setObjectName(QString::fromUtf8("tbvwDersler"));
        tbvwDersler->setGeometry(QRect(30, 110, 311, 191));
        tbvwDersOgrencileri = new QTableView(Dersler);
        tbvwDersOgrencileri->setObjectName(QString::fromUtf8("tbvwDersOgrencileri"));
        tbvwDersOgrencileri->setGeometry(QRect(30, 360, 471, 211));
        label_2 = new QLabel(Dersler);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 320, 351, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(Dersler);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 70, 111, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(Dersler);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(390, 90, 111, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(Dersler);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(390, 140, 111, 31));
        label_5->setFont(font1);
        lnDersKod = new QLineEdit(Dersler);
        lnDersKod->setObjectName(QString::fromUtf8("lnDersKod"));
        lnDersKod->setGeometry(QRect(500, 90, 201, 31));
        lnDersAd = new QLineEdit(Dersler);
        lnDersAd->setObjectName(QString::fromUtf8("lnDersAd"));
        lnDersAd->setGeometry(QRect(500, 140, 201, 31));
        btnDersYenKayit = new QPushButton(Dersler);
        btnDersYenKayit->setObjectName(QString::fromUtf8("btnDersYenKayit"));
        btnDersYenKayit->setGeometry(QRect(390, 210, 93, 28));
        btnDersYenKayit->setFont(font1);
        btnDersSil = new QPushButton(Dersler);
        btnDersSil->setObjectName(QString::fromUtf8("btnDersSil"));
        btnDersSil->setGeometry(QRect(570, 210, 93, 28));
        btnDersSil->setFont(font1);
        btnDersGuncelle = new QPushButton(Dersler);
        btnDersGuncelle->setObjectName(QString::fromUtf8("btnDersGuncelle"));
        btnDersGuncelle->setGeometry(QRect(480, 270, 93, 28));
        btnDersGuncelle->setFont(font1);

        retranslateUi(Dersler);

        QMetaObject::connectSlotsByName(Dersler);
    } // setupUi

    void retranslateUi(QDialog *Dersler)
    {
        Dersler->setWindowTitle(QCoreApplication::translate("Dersler", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dersler", "DERS \304\260\305\236LEMLER\304\260", nullptr));
        label_2->setText(QCoreApplication::translate("Dersler", "Se\303\247ilen Derse Ait \303\226\304\237renciler", nullptr));
        label_3->setText(QCoreApplication::translate("Dersler", "T\303\274m Dersler", nullptr));
        label_4->setText(QCoreApplication::translate("Dersler", "Ders Kodu:", nullptr));
        label_5->setText(QCoreApplication::translate("Dersler", "Ders Ad\304\261:", nullptr));
        btnDersYenKayit->setText(QCoreApplication::translate("Dersler", "Yeni Kay\304\261t", nullptr));
        btnDersSil->setText(QCoreApplication::translate("Dersler", "Sil", nullptr));
        btnDersGuncelle->setText(QCoreApplication::translate("Dersler", "G\303\274ncelle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dersler: public Ui_Dersler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DERSLER_H
