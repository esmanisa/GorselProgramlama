/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QSpinBox *spinBox;
    QPushButton *btn_rastgele;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *lbl_sinir;
    QLabel *label_5;
    QGroupBox *groupBox;
    QRadioButton *rbtn_bir;
    QRadioButton *rbtn_iki;
    QLabel *label_4;
    QListWidget *list_bir;
    QListWidget *list_iki;
    QLabel *label_6;
    QPushButton *btn_yarisma;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(541, 607);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(190, 80, 42, 22));
        spinBox->setMinimum(10);
        spinBox->setMaximum(1000);
        btn_rastgele = new QPushButton(centralwidget);
        btn_rastgele->setObjectName(QString::fromUtf8("btn_rastgele"));
        btn_rastgele->setGeometry(QRect(250, 60, 141, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 50, 55, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 150, 91, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 180, 31, 16));
        label_3->setFont(font);
        lbl_sinir = new QLabel(centralwidget);
        lbl_sinir->setObjectName(QString::fromUtf8("lbl_sinir"));
        lbl_sinir->setGeometry(QRect(140, 180, 31, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(170, 180, 291, 16));
        label_5->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(190, 230, 181, 80));
        QPalette palette;
        QBrush brush(QColor(255, 0, 4, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        QBrush brush2(QColor(255, 0, 4, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        groupBox->setPalette(palette);
        groupBox->setFont(font);
        rbtn_bir = new QRadioButton(groupBox);
        rbtn_bir->setObjectName(QString::fromUtf8("rbtn_bir"));
        rbtn_bir->setGeometry(QRect(20, 20, 121, 20));
        rbtn_iki = new QRadioButton(groupBox);
        rbtn_iki->setObjectName(QString::fromUtf8("rbtn_iki"));
        rbtn_iki->setGeometry(QRect(20, 50, 95, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 330, 91, 16));
        label_4->setFont(font);
        list_bir = new QListWidget(centralwidget);
        list_bir->setObjectName(QString::fromUtf8("list_bir"));
        list_bir->setEnabled(false);
        list_bir->setGeometry(QRect(60, 370, 111, 151));
        list_iki = new QListWidget(centralwidget);
        list_iki->setObjectName(QString::fromUtf8("list_iki"));
        list_iki->setEnabled(false);
        list_iki->setGeometry(QRect(340, 370, 111, 151));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(360, 330, 91, 16));
        label_6->setFont(font);
        btn_yarisma = new QPushButton(centralwidget);
        btn_yarisma->setObjectName(QString::fromUtf8("btn_yarisma"));
        btn_yarisma->setGeometry(QRect(190, 510, 131, 41));
        btn_yarisma->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 541, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_rastgele->setText(QCoreApplication::translate("MainWindow", "Rastgele Sayi Uret", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Ust Deger", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Uretilen Sayi:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "0 ile", nullptr));
        lbl_sinir->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Sayilari arasinda sayi tahmin oyunu basliyor", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Oyuncu", nullptr));
        rbtn_bir->setText(QCoreApplication::translate("MainWindow", "Tek Oyuncu", nullptr));
        rbtn_iki->setText(QCoreApplication::translate("MainWindow", "Iki Oyuncu", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Oyuncu 1", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Oyuncu 2", nullptr));
        btn_yarisma->setText(QCoreApplication::translate("MainWindow", "Yarismayi Baslat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
