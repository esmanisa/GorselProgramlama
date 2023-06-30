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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QPushButton *btnHesapla;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QDateEdit *dEBirthdate;
    QDoubleSpinBox *dsbBoy;
    QSpinBox *sbKilo;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(409, 327);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 50, 281, 221));
        btnHesapla = new QPushButton(groupBox);
        btnHesapla->setObjectName(QString::fromUtf8("btnHesapla"));
        btnHesapla->setGeometry(QRect(70, 170, 93, 28));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 40, 91, 101));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(130, 40, 101, 101));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        dEBirthdate = new QDateEdit(widget1);
        dEBirthdate->setObjectName(QString::fromUtf8("dEBirthdate"));
        dEBirthdate->setDateTime(QDateTime(QDate(1980, 1, 1), QTime(0, 0, 0)));

        verticalLayout_2->addWidget(dEBirthdate);

        dsbBoy = new QDoubleSpinBox(widget1);
        dsbBoy->setObjectName(QString::fromUtf8("dsbBoy"));
        dsbBoy->setMinimum(1.000000000000000);
        dsbBoy->setSingleStep(0.010000000000000);

        verticalLayout_2->addWidget(dsbBoy);

        sbKilo = new QSpinBox(widget1);
        sbKilo->setObjectName(QString::fromUtf8("sbKilo"));
        sbKilo->setMinimum(30);
        sbKilo->setMaximum(500);

        verticalLayout_2->addWidget(sbKilo);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "VKI Hesaplama", nullptr));
        btnHesapla->setText(QCoreApplication::translate("Dialog", "Hesapla", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Do\304\237um Tarihi:", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Boy (m):", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Kilo (kg):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
