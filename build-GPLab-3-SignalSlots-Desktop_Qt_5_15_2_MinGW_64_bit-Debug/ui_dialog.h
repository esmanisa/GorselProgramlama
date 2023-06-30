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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnHesapla;
    QPushButton *btnTemizle;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lblName;
    QLineEdit *lblLesson;
    QLineEdit *lblVize;
    QLineEdit *lblFinal;
    QTextBrowser *text_Sonuc;
    QPushButton *btnCikis;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(552, 465);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(80, 30, 401, 341));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 50, 91, 131));
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

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 190, 289, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnHesapla = new QPushButton(layoutWidget1);
        btnHesapla->setObjectName(QString::fromUtf8("btnHesapla"));

        horizontalLayout->addWidget(btnHesapla);

        btnTemizle = new QPushButton(layoutWidget1);
        btnTemizle->setObjectName(QString::fromUtf8("btnTemizle"));

        horizontalLayout->addWidget(btnTemizle);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(170, 50, 171, 131));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lblName = new QLineEdit(layoutWidget2);
        lblName->setObjectName(QString::fromUtf8("lblName"));

        verticalLayout_2->addWidget(lblName);

        lblLesson = new QLineEdit(layoutWidget2);
        lblLesson->setObjectName(QString::fromUtf8("lblLesson"));

        verticalLayout_2->addWidget(lblLesson);

        lblVize = new QLineEdit(layoutWidget2);
        lblVize->setObjectName(QString::fromUtf8("lblVize"));

        verticalLayout_2->addWidget(lblVize);

        lblFinal = new QLineEdit(layoutWidget2);
        lblFinal->setObjectName(QString::fromUtf8("lblFinal"));

        verticalLayout_2->addWidget(lblFinal);

        text_Sonuc = new QTextBrowser(groupBox);
        text_Sonuc->setObjectName(QString::fromUtf8("text_Sonuc"));
        text_Sonuc->setGeometry(QRect(50, 250, 301, 71));
        btnCikis = new QPushButton(Dialog);
        btnCikis->setObjectName(QString::fromUtf8("btnCikis"));
        btnCikis->setGeometry(QRect(390, 390, 93, 28));

        retranslateUi(Dialog);
        QObject::connect(btnCikis, SIGNAL(clicked()), Dialog, SLOT(reject()));
        QObject::connect(btnTemizle, SIGNAL(clicked()), text_Sonuc, SLOT(clear()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "\303\226\304\237renci Not Hesaplama Otomasyonu", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\303\226\304\237renci Ad\304\261:", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Ders Ad\304\261:", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Vize Not:", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Final Not:", nullptr));
        btnHesapla->setText(QCoreApplication::translate("Dialog", "Hesapla", nullptr));
        btnTemizle->setText(QCoreApplication::translate("Dialog", "Temizle", nullptr));
        btnCikis->setText(QCoreApplication::translate("Dialog", "\303\207\304\261k\304\261\305\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
