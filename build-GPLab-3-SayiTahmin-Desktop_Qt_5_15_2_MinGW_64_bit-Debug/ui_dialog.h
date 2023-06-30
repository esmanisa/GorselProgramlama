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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QLabel *lbl1Aralik;
    QLabel *lbl2Aralik;
    QLineEdit *lneditAralik1;
    QLineEdit *lneditAraik2;
    QPushButton *btnSayiUret;
    QPushButton *btnTahminEt;
    QTextBrowser *textSonuc;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(398, 369);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 30, 321, 291));
        lbl1Aralik = new QLabel(groupBox);
        lbl1Aralik->setObjectName(QString::fromUtf8("lbl1Aralik"));
        lbl1Aralik->setGeometry(QRect(30, 40, 91, 21));
        lbl2Aralik = new QLabel(groupBox);
        lbl2Aralik->setObjectName(QString::fromUtf8("lbl2Aralik"));
        lbl2Aralik->setGeometry(QRect(190, 40, 91, 21));
        lneditAralik1 = new QLineEdit(groupBox);
        lneditAralik1->setObjectName(QString::fromUtf8("lneditAralik1"));
        lneditAralik1->setGeometry(QRect(30, 70, 101, 31));
        lneditAraik2 = new QLineEdit(groupBox);
        lneditAraik2->setObjectName(QString::fromUtf8("lneditAraik2"));
        lneditAraik2->setGeometry(QRect(190, 70, 101, 31));
        btnSayiUret = new QPushButton(groupBox);
        btnSayiUret->setObjectName(QString::fromUtf8("btnSayiUret"));
        btnSayiUret->setGeometry(QRect(60, 110, 201, 31));
        btnTahminEt = new QPushButton(groupBox);
        btnTahminEt->setObjectName(QString::fromUtf8("btnTahminEt"));
        btnTahminEt->setGeometry(QRect(120, 150, 93, 28));
        textSonuc = new QTextBrowser(groupBox);
        textSonuc->setObjectName(QString::fromUtf8("textSonuc"));
        textSonuc->setGeometry(QRect(30, 190, 281, 81));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "Say\304\261 Tahmin Oyunu", nullptr));
        lbl1Aralik->setText(QCoreApplication::translate("Dialog", "1. Aral\304\261k", nullptr));
        lbl2Aralik->setText(QCoreApplication::translate("Dialog", "2. Aral\304\261k", nullptr));
        btnSayiUret->setText(QCoreApplication::translate("Dialog", "Tahmin Edilecek Say\304\261y\304\261 \303\234ret", nullptr));
        btnTahminEt->setText(QCoreApplication::translate("Dialog", "Tahmin Et", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
