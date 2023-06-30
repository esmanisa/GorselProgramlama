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
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QPushButton *btnHesapla;
    QListWidget *lwGecenler;
    QLabel *label_6;
    QLabel *label_7;
    QListWidget *lwKalanlar;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lnAd;
    QLineEdit *lnSoyad;
    QLineEdit *lnVize;
    QLineEdit *lnFinal;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(542, 445);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 30, 291, 31));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        btnHesapla = new QPushButton(Dialog);
        btnHesapla->setObjectName(QString::fromUtf8("btnHesapla"));
        btnHesapla->setGeometry(QRect(220, 200, 93, 28));
        lwGecenler = new QListWidget(Dialog);
        lwGecenler->setObjectName(QString::fromUtf8("lwGecenler"));
        lwGecenler->setGeometry(QRect(70, 270, 171, 171));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(110, 230, 91, 31));
        label_6->setFont(font);
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(340, 240, 91, 31));
        label_7->setFont(font);
        lwKalanlar = new QListWidget(Dialog);
        lwKalanlar->setObjectName(QString::fromUtf8("lwKalanlar"));
        lwKalanlar->setGeometry(QRect(280, 270, 171, 171));
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(150, 80, 71, 111));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        widget1 = new QWidget(Dialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(240, 80, 139, 111));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lnAd = new QLineEdit(widget1);
        lnAd->setObjectName(QString::fromUtf8("lnAd"));

        verticalLayout_2->addWidget(lnAd);

        lnSoyad = new QLineEdit(widget1);
        lnSoyad->setObjectName(QString::fromUtf8("lnSoyad"));

        verticalLayout_2->addWidget(lnSoyad);

        lnVize = new QLineEdit(widget1);
        lnVize->setObjectName(QString::fromUtf8("lnVize"));

        verticalLayout_2->addWidget(lnVize);

        lnFinal = new QLineEdit(widget1);
        lnFinal->setObjectName(QString::fromUtf8("lnFinal"));

        verticalLayout_2->addWidget(lnFinal);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\303\226\304\237renci Not Hesaplama Otomasyonu", nullptr));
        btnHesapla->setText(QCoreApplication::translate("Dialog", "Hesapla", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "Ge\303\247enler", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "Kalanlar", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Ad\304\261:", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Soyad\304\261:", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Vize Not", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "Final Not:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
