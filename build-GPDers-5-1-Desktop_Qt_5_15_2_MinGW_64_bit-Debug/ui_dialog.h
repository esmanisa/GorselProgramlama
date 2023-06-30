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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QComboBox *cmbRenk;
    QLabel *label;
    QLabel *lblRenk;
    QPushButton *btnHatirla;
    QComboBox *cmbDemirbas;
    QPushButton *btnDemirbasEkle;
    QPushButton *btnKayitSil;
    QPushButton *btnTemizle;
    QPushButton *btnTamam;
    QPushButton *btnIptal;
    QListWidget *listDemirbas;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(634, 434);
        cmbRenk = new QComboBox(Dialog);
        cmbRenk->addItem(QString());
        cmbRenk->addItem(QString());
        cmbRenk->addItem(QString());
        cmbRenk->addItem(QString());
        cmbRenk->addItem(QString());
        cmbRenk->addItem(QString());
        cmbRenk->addItem(QString());
        cmbRenk->setObjectName(QString::fromUtf8("cmbRenk"));
        cmbRenk->setGeometry(QRect(240, 30, 73, 22));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 31, 171, 20));
        lblRenk = new QLabel(Dialog);
        lblRenk->setObjectName(QString::fromUtf8("lblRenk"));
        lblRenk->setGeometry(QRect(40, 70, 191, 16));
        btnHatirla = new QPushButton(Dialog);
        btnHatirla->setObjectName(QString::fromUtf8("btnHatirla"));
        btnHatirla->setGeometry(QRect(330, 30, 93, 28));
        cmbDemirbas = new QComboBox(Dialog);
        cmbDemirbas->setObjectName(QString::fromUtf8("cmbDemirbas"));
        cmbDemirbas->setGeometry(QRect(40, 110, 161, 31));
        cmbDemirbas->setEditable(true);
        btnDemirbasEkle = new QPushButton(Dialog);
        btnDemirbasEkle->setObjectName(QString::fromUtf8("btnDemirbasEkle"));
        btnDemirbasEkle->setGeometry(QRect(350, 110, 151, 31));
        btnKayitSil = new QPushButton(Dialog);
        btnKayitSil->setObjectName(QString::fromUtf8("btnKayitSil"));
        btnKayitSil->setGeometry(QRect(40, 290, 93, 28));
        btnTemizle = new QPushButton(Dialog);
        btnTemizle->setObjectName(QString::fromUtf8("btnTemizle"));
        btnTemizle->setGeometry(QRect(150, 290, 93, 28));
        btnTamam = new QPushButton(Dialog);
        btnTamam->setObjectName(QString::fromUtf8("btnTamam"));
        btnTamam->setGeometry(QRect(330, 290, 93, 28));
        btnIptal = new QPushButton(Dialog);
        btnIptal->setObjectName(QString::fromUtf8("btnIptal"));
        btnIptal->setGeometry(QRect(430, 290, 93, 28));
        listDemirbas = new QListWidget(Dialog);
        listDemirbas->setObjectName(QString::fromUtf8("listDemirbas"));
        listDemirbas->setGeometry(QRect(40, 160, 491, 121));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        cmbRenk->setItemText(0, QCoreApplication::translate("Dialog", "blue", nullptr));
        cmbRenk->setItemText(1, QCoreApplication::translate("Dialog", "darkCyan", nullptr));
        cmbRenk->setItemText(2, QCoreApplication::translate("Dialog", "cyan", nullptr));
        cmbRenk->setItemText(3, QCoreApplication::translate("Dialog", "gray", nullptr));
        cmbRenk->setItemText(4, QCoreApplication::translate("Dialog", "yellow", nullptr));
        cmbRenk->setItemText(5, QCoreApplication::translate("Dialog", "orange", nullptr));
        cmbRenk->setItemText(6, QString());

        label->setText(QCoreApplication::translate("Dialog", "Arka Plan Rengini Se\303\247iniz:", nullptr));
        lblRenk->setText(QCoreApplication::translate("Dialog", "Se\303\247ti\304\237iniz Renk:", nullptr));
        btnHatirla->setText(QCoreApplication::translate("Dialog", "Hat\304\261rla", nullptr));
        btnDemirbasEkle->setText(QCoreApplication::translate("Dialog", "Demirba\305\237 Ekle", nullptr));
        btnKayitSil->setText(QCoreApplication::translate("Dialog", "Kayd\304\261 Sil", nullptr));
        btnTemizle->setText(QCoreApplication::translate("Dialog", "Listeyi Temizle", nullptr));
        btnTamam->setText(QCoreApplication::translate("Dialog", "Tamam", nullptr));
        btnIptal->setText(QCoreApplication::translate("Dialog", "\304\260ptal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
