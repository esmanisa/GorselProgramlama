/********************************************************************************
** Form generated from reading UI file 'not.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOT_H
#define UI_NOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Not
{
public:
    QLabel *label;
    QTableView *tbvwNotTumOgr;
    QTableView *tbvwNotTumDers;
    QTableView *tbvwTumDersOgr;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lnNotOgrNo;
    QLineEdit *lnNotDersKod;
    QLineEdit *lnNotVizeNot;
    QLineEdit *lnNotFinalNot;
    QPushButton *btnDersKayitEkle;

    void setupUi(QDialog *Not)
    {
        if (Not->objectName().isEmpty())
            Not->setObjectName(QString::fromUtf8("Not"));
        Not->resize(911, 908);
        label = new QLabel(Not);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 10, 181, 51));
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
        tbvwNotTumOgr = new QTableView(Not);
        tbvwNotTumOgr->setObjectName(QString::fromUtf8("tbvwNotTumOgr"));
        tbvwNotTumOgr->setGeometry(QRect(40, 90, 321, 211));
        tbvwNotTumDers = new QTableView(Not);
        tbvwNotTumDers->setObjectName(QString::fromUtf8("tbvwNotTumDers"));
        tbvwNotTumDers->setGeometry(QRect(490, 90, 311, 211));
        tbvwTumDersOgr = new QTableView(Not);
        tbvwTumDersOgr->setObjectName(QString::fromUtf8("tbvwTumDersOgr"));
        tbvwTumDersOgr->setGeometry(QRect(70, 570, 731, 261));
        label_2 = new QLabel(Not);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 50, 211, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(Not);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(490, 50, 211, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(Not);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(310, 510, 271, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(Not);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 350, 131, 31));
        label_5->setFont(font1);
        label_6 = new QLabel(Not);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 400, 111, 31));
        label_6->setFont(font1);
        label_7 = new QLabel(Not);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(490, 350, 81, 31));
        label_7->setFont(font1);
        label_8 = new QLabel(Not);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(490, 400, 91, 31));
        label_8->setFont(font1);
        lnNotOgrNo = new QLineEdit(Not);
        lnNotOgrNo->setObjectName(QString::fromUtf8("lnNotOgrNo"));
        lnNotOgrNo->setEnabled(false);
        lnNotOgrNo->setGeometry(QRect(190, 350, 181, 31));
        lnNotDersKod = new QLineEdit(Not);
        lnNotDersKod->setObjectName(QString::fromUtf8("lnNotDersKod"));
        lnNotDersKod->setEnabled(false);
        lnNotDersKod->setGeometry(QRect(190, 400, 181, 31));
        lnNotVizeNot = new QLineEdit(Not);
        lnNotVizeNot->setObjectName(QString::fromUtf8("lnNotVizeNot"));
        lnNotVizeNot->setGeometry(QRect(610, 350, 181, 31));
        lnNotFinalNot = new QLineEdit(Not);
        lnNotFinalNot->setObjectName(QString::fromUtf8("lnNotFinalNot"));
        lnNotFinalNot->setGeometry(QRect(610, 400, 181, 31));
        btnDersKayitEkle = new QPushButton(Not);
        btnDersKayitEkle->setObjectName(QString::fromUtf8("btnDersKayitEkle"));
        btnDersKayitEkle->setGeometry(QRect(360, 450, 141, 31));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        btnDersKayitEkle->setFont(font2);

        retranslateUi(Not);

        QMetaObject::connectSlotsByName(Not);
    } // setupUi

    void retranslateUi(QDialog *Not)
    {
        Not->setWindowTitle(QCoreApplication::translate("Not", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Not", "NOT \304\260\305\236LEMLER\304\260", nullptr));
        label_2->setText(QCoreApplication::translate("Not", "T\303\274m \303\226\304\237renciler", nullptr));
        label_3->setText(QCoreApplication::translate("Not", "T\303\274m Dersler", nullptr));
        label_4->setText(QCoreApplication::translate("Not", "T\303\274m \303\226\304\237renci-Ders Kay\304\261tlar\304\261", nullptr));
        label_5->setText(QCoreApplication::translate("Not", "\303\226\304\237renci No:", nullptr));
        label_6->setText(QCoreApplication::translate("Not", "Ders Kodu:", nullptr));
        label_7->setText(QCoreApplication::translate("Not", "Vize Not:", nullptr));
        label_8->setText(QCoreApplication::translate("Not", "Final Not:", nullptr));
        btnDersKayitEkle->setText(QCoreApplication::translate("Not", "Ders Kay\304\261t Ekle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Not: public Ui_Not {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOT_H
