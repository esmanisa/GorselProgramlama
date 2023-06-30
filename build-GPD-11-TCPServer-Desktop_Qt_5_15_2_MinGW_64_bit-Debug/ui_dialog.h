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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLineEdit *txtMesaj;
    QLabel *label_2;
    QSpinBox *spinBox;
    QDialogButtonBox *buttonBox;
    QWidget *page_2;
    QPushButton *btnStart;
    QPushButton *btnStop;
    QLabel *lblStatus;
    QDialogButtonBox *buttonBox_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(435, 513);
        stackedWidget = new QStackedWidget(Dialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 10, 381, 391));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 121, 21));
        txtMesaj = new QLineEdit(page);
        txtMesaj->setObjectName(QString::fromUtf8("txtMesaj"));
        txtMesaj->setGeometry(QRect(30, 80, 141, 21));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 120, 131, 31));
        spinBox = new QSpinBox(page);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(30, 170, 131, 21));
        buttonBox = new QDialogButtonBox(page);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(52, 380, 291, 28));
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        btnStart = new QPushButton(page_2);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));
        btnStart->setGeometry(QRect(20, 30, 131, 41));
        btnStop = new QPushButton(page_2);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        btnStop->setGeometry(QRect(180, 30, 151, 41));
        lblStatus = new QLabel(page_2);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        lblStatus->setGeometry(QRect(40, 150, 211, 31));
        stackedWidget->addWidget(page_2);
        buttonBox_2 = new QDialogButtonBox(Dialog);
        buttonBox_2->setObjectName(QString::fromUtf8("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(210, 440, 193, 28));
        buttonBox_2->setStandardButtons(QDialogButtonBox::NoButton);

        retranslateUi(Dialog);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Kar\305\237\304\261lama Mesaj\304\261n\304\261z:", nullptr));
        txtMesaj->setText(QCoreApplication::translate("Dialog", "Sunucuma Ho\305\237geldiniz", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Port Numaras\304\261 ? ", nullptr));
        btnStart->setText(QCoreApplication::translate("Dialog", "Start", nullptr));
        btnStop->setText(QCoreApplication::translate("Dialog", "Stop", nullptr));
        lblStatus->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
