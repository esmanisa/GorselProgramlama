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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *btnCheckable;
    QPushButton *btnCheckableAktif;
    QPushButton *btnRepeat;
    QPushButton *btnToggleRepeat;
    QPushButton *btnDefault;
    QPushButton *btnToggleDefault;
    QPushButton *btnCikis;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(297, 211);
        btnCheckable = new QPushButton(Dialog);
        btnCheckable->setObjectName(QString::fromUtf8("btnCheckable"));
        btnCheckable->setGeometry(QRect(40, 30, 93, 28));
        btnCheckable->setCheckable(true);
        btnCheckableAktif = new QPushButton(Dialog);
        btnCheckableAktif->setObjectName(QString::fromUtf8("btnCheckableAktif"));
        btnCheckableAktif->setGeometry(QRect(140, 30, 131, 31));
        btnRepeat = new QPushButton(Dialog);
        btnRepeat->setObjectName(QString::fromUtf8("btnRepeat"));
        btnRepeat->setGeometry(QRect(40, 70, 93, 28));
        btnRepeat->setCheckable(false);
        btnRepeat->setAutoRepeat(true);
        btnToggleRepeat = new QPushButton(Dialog);
        btnToggleRepeat->setObjectName(QString::fromUtf8("btnToggleRepeat"));
        btnToggleRepeat->setGeometry(QRect(140, 70, 131, 28));
        btnDefault = new QPushButton(Dialog);
        btnDefault->setObjectName(QString::fromUtf8("btnDefault"));
        btnDefault->setGeometry(QRect(40, 110, 93, 28));
        btnToggleDefault = new QPushButton(Dialog);
        btnToggleDefault->setObjectName(QString::fromUtf8("btnToggleDefault"));
        btnToggleDefault->setGeometry(QRect(140, 110, 131, 28));
        btnCikis = new QPushButton(Dialog);
        btnCikis->setObjectName(QString::fromUtf8("btnCikis"));
        btnCikis->setGeometry(QRect(40, 150, 231, 28));

        retranslateUi(Dialog);
        QObject::connect(btnCikis, SIGNAL(clicked()), Dialog, SLOT(reject()));

        btnDefault->setDefault(true);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnCheckable->setText(QCoreApplication::translate("Dialog", "Checkable", nullptr));
        btnCheckableAktif->setText(QCoreApplication::translate("Dialog", "Checkable aktif mi?", nullptr));
        btnRepeat->setText(QCoreApplication::translate("Dialog", "Auto Repeat", nullptr));
        btnToggleRepeat->setText(QCoreApplication::translate("Dialog", "Auto Repeat Degistir", nullptr));
        btnDefault->setText(QCoreApplication::translate("Dialog", "Default", nullptr));
        btnToggleDefault->setText(QCoreApplication::translate("Dialog", "Default Degistir", nullptr));
        btnCikis->setText(QCoreApplication::translate("Dialog", "Cikis", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
