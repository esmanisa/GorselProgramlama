/********************************************************************************
** Form generated from reading UI file 'resimsec.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESIMSEC_H
#define UI_RESIMSEC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ResimSec
{
public:
    QDialogButtonBox *buttonBox;
    QListWidget *listWidget;

    void setupUi(QDialog *ResimSec)
    {
        if (ResimSec->objectName().isEmpty())
            ResimSec->setObjectName(QString::fromUtf8("ResimSec"));
        ResimSec->resize(400, 300);
        buttonBox = new QDialogButtonBox(ResimSec);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        listWidget = new QListWidget(ResimSec);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 20, 371, 181));

        retranslateUi(ResimSec);
        QObject::connect(buttonBox, SIGNAL(accepted()), ResimSec, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ResimSec, SLOT(reject()));

        QMetaObject::connectSlotsByName(ResimSec);
    } // setupUi

    void retranslateUi(QDialog *ResimSec)
    {
        ResimSec->setWindowTitle(QCoreApplication::translate("ResimSec", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResimSec: public Ui_ResimSec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESIMSEC_H
