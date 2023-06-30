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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *btnRndSayiUret;
    QLabel *label_2;
    QLabel *lblUretilenSayi;
    QGroupBox *grpOyuncu;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *rdTekOyuncu;
    QRadioButton *rdIkiOyuncu;
    QLabel *lblAralik;
    QPushButton *btnBaslat;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QListWidget *lwOyuncu1;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QListWidget *lwOyuncu2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpinBox *spinBoxUstDeger;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(524, 668);
        btnRndSayiUret = new QPushButton(Dialog);
        btnRndSayiUret->setObjectName(QString::fromUtf8("btnRndSayiUret"));
        btnRndSayiUret->setGeometry(QRect(210, 30, 221, 61));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        btnRndSayiUret->setFont(font);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 110, 121, 31));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        lblUretilenSayi = new QLabel(Dialog);
        lblUretilenSayi->setObjectName(QString::fromUtf8("lblUretilenSayi"));
        lblUretilenSayi->setEnabled(false);
        lblUretilenSayi->setGeometry(QRect(250, 110, 81, 31));
        lblUretilenSayi->setFont(font1);
        grpOyuncu = new QGroupBox(Dialog);
        grpOyuncu->setObjectName(QString::fromUtf8("grpOyuncu"));
        grpOyuncu->setGeometry(QRect(170, 190, 161, 111));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        grpOyuncu->setPalette(palette);
        grpOyuncu->setFont(font1);
        layoutWidget = new QWidget(grpOyuncu);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 141, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        rdTekOyuncu = new QRadioButton(layoutWidget);
        rdTekOyuncu->setObjectName(QString::fromUtf8("rdTekOyuncu"));

        verticalLayout->addWidget(rdTekOyuncu);

        rdIkiOyuncu = new QRadioButton(layoutWidget);
        rdIkiOyuncu->setObjectName(QString::fromUtf8("rdIkiOyuncu"));

        verticalLayout->addWidget(rdIkiOyuncu);

        lblAralik = new QLabel(Dialog);
        lblAralik->setObjectName(QString::fromUtf8("lblAralik"));
        lblAralik->setGeometry(QRect(110, 140, 341, 51));
        lblAralik->setFont(font1);
        btnBaslat = new QPushButton(Dialog);
        btnBaslat->setObjectName(QString::fromUtf8("btnBaslat"));
        btnBaslat->setGeometry(QRect(130, 590, 231, 41));
        btnBaslat->setFont(font1);
        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 320, 161, 251));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(true);
        label_4->setFont(font1);

        verticalLayout_3->addWidget(label_4);

        lwOyuncu1 = new QListWidget(layoutWidget1);
        lwOyuncu1->setObjectName(QString::fromUtf8("lwOyuncu1"));
        lwOyuncu1->setEnabled(false);

        verticalLayout_3->addWidget(lwOyuncu1);

        layoutWidget2 = new QWidget(Dialog);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(260, 320, 181, 251));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setEnabled(true);
        label_5->setFont(font1);

        verticalLayout_4->addWidget(label_5);

        lwOyuncu2 = new QListWidget(layoutWidget2);
        lwOyuncu2->setObjectName(QString::fromUtf8("lwOyuncu2"));
        lwOyuncu2->setEnabled(false);

        verticalLayout_4->addWidget(lwOyuncu2);

        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(130, 30, 61, 61));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        spinBoxUstDeger = new QSpinBox(widget);
        spinBoxUstDeger->setObjectName(QString::fromUtf8("spinBoxUstDeger"));
        spinBoxUstDeger->setMinimum(10);
        spinBoxUstDeger->setMaximum(1000);

        verticalLayout_2->addWidget(spinBoxUstDeger);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnRndSayiUret->setText(QCoreApplication::translate("Dialog", "Rastgele Say\304\261 \303\234ret", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\303\234retilen Say\304\261:", nullptr));
        lblUretilenSayi->setText(QString());
        grpOyuncu->setTitle(QCoreApplication::translate("Dialog", "Oyuncu", nullptr));
        rdTekOyuncu->setText(QCoreApplication::translate("Dialog", "Tek Oyunculu", nullptr));
        rdIkiOyuncu->setText(QCoreApplication::translate("Dialog", "\304\260ki Oyunculu", nullptr));
        lblAralik->setText(QString());
        btnBaslat->setText(QCoreApplication::translate("Dialog", "Yar\304\261\305\237may\304\261 Ba\305\237lat", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "           Oyuncu 1", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "             Oyuncu 2", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\303\234st De\304\237er", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
