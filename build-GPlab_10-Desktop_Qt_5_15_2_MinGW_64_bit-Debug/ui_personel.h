/********************************************************************************
** Form generated from reading UI file 'personel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONEL_H
#define UI_PERSONEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_personel
{
public:
    QTableView *tblePersonel;
    QPushButton *btnKaydet;
    QPushButton *btnGuncelle;
    QPushButton *btnSil;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *edtPersonelId;
    QLineEdit *edtPersonelAd;
    QLineEdit *edtPersonelSoyad;
    QLineEdit *edtDepartmanId;

    void setupUi(QDialog *personel)
    {
        if (personel->objectName().isEmpty())
            personel->setObjectName(QString::fromUtf8("personel"));
        personel->resize(829, 469);
        QFont font;
        font.setPointSize(10);
        personel->setFont(font);
        tblePersonel = new QTableView(personel);
        tblePersonel->setObjectName(QString::fromUtf8("tblePersonel"));
        tblePersonel->setGeometry(QRect(410, 40, 381, 381));
        btnKaydet = new QPushButton(personel);
        btnKaydet->setObjectName(QString::fromUtf8("btnKaydet"));
        btnKaydet->setGeometry(QRect(70, 300, 93, 28));
        btnGuncelle = new QPushButton(personel);
        btnGuncelle->setObjectName(QString::fromUtf8("btnGuncelle"));
        btnGuncelle->setGeometry(QRect(210, 300, 93, 28));
        btnSil = new QPushButton(personel);
        btnSil->setObjectName(QString::fromUtf8("btnSil"));
        btnSil->setGeometry(QRect(150, 370, 93, 28));
        layoutWidget = new QWidget(personel);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 40, 141, 221));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        layoutWidget1 = new QWidget(personel);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(190, 40, 171, 231));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        edtPersonelId = new QLineEdit(layoutWidget1);
        edtPersonelId->setObjectName(QString::fromUtf8("edtPersonelId"));
        edtPersonelId->setEnabled(false);

        verticalLayout_2->addWidget(edtPersonelId);

        edtPersonelAd = new QLineEdit(layoutWidget1);
        edtPersonelAd->setObjectName(QString::fromUtf8("edtPersonelAd"));

        verticalLayout_2->addWidget(edtPersonelAd);

        edtPersonelSoyad = new QLineEdit(layoutWidget1);
        edtPersonelSoyad->setObjectName(QString::fromUtf8("edtPersonelSoyad"));

        verticalLayout_2->addWidget(edtPersonelSoyad);

        edtDepartmanId = new QLineEdit(layoutWidget1);
        edtDepartmanId->setObjectName(QString::fromUtf8("edtDepartmanId"));

        verticalLayout_2->addWidget(edtDepartmanId);


        retranslateUi(personel);

        QMetaObject::connectSlotsByName(personel);
    } // setupUi

    void retranslateUi(QDialog *personel)
    {
        personel->setWindowTitle(QCoreApplication::translate("personel", "Dialog", nullptr));
        btnKaydet->setText(QCoreApplication::translate("personel", "Kaydet", nullptr));
        btnGuncelle->setText(QCoreApplication::translate("personel", "G\303\274ncelle", nullptr));
        btnSil->setText(QCoreApplication::translate("personel", "Sil", nullptr));
        label->setText(QCoreApplication::translate("personel", "Personel ID:", nullptr));
        label_2->setText(QCoreApplication::translate("personel", "Personel Ad:", nullptr));
        label_3->setText(QCoreApplication::translate("personel", "Personel Soyad:", nullptr));
        label_4->setText(QCoreApplication::translate("personel", "Departman ID:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class personel: public Ui_personel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONEL_H
