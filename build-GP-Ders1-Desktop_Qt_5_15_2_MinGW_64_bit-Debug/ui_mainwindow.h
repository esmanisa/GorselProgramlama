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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action1_seviye;
    QAction *action2_seviye;
    QWidget *centralwidget;
    QPushButton *btnCevap;
    QGroupBox *groupBox;
    QRadioButton *rdDizel;
    QRadioButton *rdBenzin;
    QPlainTextEdit *txtCevap;
    QMenuBar *menubar;
    QMenu *menuBilgiler;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(564, 445);
        action1_seviye = new QAction(MainWindow);
        action1_seviye->setObjectName(QString::fromUtf8("action1_seviye"));
        action2_seviye = new QAction(MainWindow);
        action2_seviye->setObjectName(QString::fromUtf8("action2_seviye"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnCevap = new QPushButton(centralwidget);
        btnCevap->setObjectName(QString::fromUtf8("btnCevap"));
        btnCevap->setGeometry(QRect(30, 160, 111, 51));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 171, 131));
        rdDizel = new QRadioButton(groupBox);
        rdDizel->setObjectName(QString::fromUtf8("rdDizel"));
        rdDizel->setGeometry(QRect(20, 30, 95, 20));
        rdBenzin = new QRadioButton(groupBox);
        rdBenzin->setObjectName(QString::fromUtf8("rdBenzin"));
        rdBenzin->setGeometry(QRect(20, 70, 95, 20));
        txtCevap = new QPlainTextEdit(centralwidget);
        txtCevap->setObjectName(QString::fromUtf8("txtCevap"));
        txtCevap->setGeometry(QRect(30, 220, 171, 71));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 564, 26));
        menuBilgiler = new QMenu(menubar);
        menuBilgiler->setObjectName(QString::fromUtf8("menuBilgiler"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuBilgiler->menuAction());
        menuBilgiler->addAction(action1_seviye);
        menuBilgiler->addAction(action2_seviye);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action1_seviye->setText(QCoreApplication::translate("MainWindow", "1. seviye", nullptr));
        action2_seviye->setText(QCoreApplication::translate("MainWindow", "2. seviye", nullptr));
        btnCevap->setText(QCoreApplication::translate("MainWindow", "Cevab\304\261 G\303\266ster", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Yak\304\261t Bilgisi", nullptr));
        rdDizel->setText(QCoreApplication::translate("MainWindow", "Dizel", nullptr));
        rdBenzin->setText(QCoreApplication::translate("MainWindow", "Benzin", nullptr));
        menuBilgiler->setTitle(QCoreApplication::translate("MainWindow", "Araba Bilgileri", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
