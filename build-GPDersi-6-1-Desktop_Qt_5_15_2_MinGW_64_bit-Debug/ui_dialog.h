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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *btnYeni;
    QPushButton *btnOku;
    QPushButton *btnKaydet;
    QPlainTextEdit *txtMetin;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(468, 373);
        btnYeni = new QPushButton(Dialog);
        btnYeni->setObjectName(QString::fromUtf8("btnYeni"));
        btnYeni->setGeometry(QRect(130, 50, 93, 28));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/dosyalar/images/file.png"), QSize(), QIcon::Normal, QIcon::On);
        btnYeni->setIcon(icon);
        btnOku = new QPushButton(Dialog);
        btnOku->setObjectName(QString::fromUtf8("btnOku"));
        btnOku->setGeometry(QRect(330, 50, 93, 28));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/dosyalar/images/folder.png"), QSize(), QIcon::Normal, QIcon::On);
        btnOku->setIcon(icon1);
        btnKaydet = new QPushButton(Dialog);
        btnKaydet->setObjectName(QString::fromUtf8("btnKaydet"));
        btnKaydet->setGeometry(QRect(230, 50, 93, 28));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/dosyalar/images/disk.png"), QSize(), QIcon::Normal, QIcon::On);
        btnKaydet->setIcon(icon2);
        txtMetin = new QPlainTextEdit(Dialog);
        txtMetin->setObjectName(QString::fromUtf8("txtMetin"));
        txtMetin->setGeometry(QRect(50, 80, 371, 241));
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(170, 330, 251, 28));
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnYeni->setText(QCoreApplication::translate("Dialog", "Yeni", nullptr));
        btnOku->setText(QCoreApplication::translate("Dialog", "Oku", nullptr));
        btnKaydet->setText(QCoreApplication::translate("Dialog", "Kaydet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
