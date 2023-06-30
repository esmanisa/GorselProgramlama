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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnOgrenciIslem;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnDersIslem;
    QLabel *label_3;
    QPushButton *btnNotIslem;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(824, 601);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnOgrenciIslem = new QPushButton(centralwidget);
        btnOgrenciIslem->setObjectName(QString::fromUtf8("btnOgrenciIslem"));
        btnOgrenciIslem->setGeometry(QRect(80, 350, 191, 31));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        btnOgrenciIslem->setPalette(palette);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        btnOgrenciIslem->setFont(font1);
        btnOgrenciIslem->setFlat(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 210, 161, 131));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/resimler/images/ogr.jpg);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 210, 151, 131));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/resimler/images/ders.jpg);"));
        btnDersIslem = new QPushButton(centralwidget);
        btnDersIslem->setObjectName(QString::fromUtf8("btnDersIslem"));
        btnDersIslem->setGeometry(QRect(320, 350, 151, 31));
        btnDersIslem->setFont(font1);
        btnDersIslem->setFlat(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(550, 210, 141, 131));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/resimler/images/notlar.jpg);"));
        btnNotIslem = new QPushButton(centralwidget);
        btnNotIslem->setObjectName(QString::fromUtf8("btnNotIslem"));
        btnNotIslem->setGeometry(QRect(550, 350, 141, 31));
        btnNotIslem->setFont(font1);
        btnNotIslem->setFlat(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 80, 631, 51));
        QPalette palette1;
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_4->setPalette(palette1);
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 824, 29));
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
        btnOgrenciIslem->setText(QCoreApplication::translate("MainWindow", "\303\226\304\237renci \304\260\305\237lemleri", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        btnDersIslem->setText(QCoreApplication::translate("MainWindow", "Ders \304\260\305\237lemleri", nullptr));
        label_3->setText(QString());
        btnNotIslem->setText(QCoreApplication::translate("MainWindow", "Not \304\260\305\237lemleri", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\303\226\304\236RENC\304\260-DERS OTOMASYONUNA HO\305\236GELD\304\260N\304\260Z!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
