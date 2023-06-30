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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionUye_Kayit;
    QAction *action_ye_Sorgu;
    QAction *actionKitap_Kayit;
    QAction *actionKitap_Sorgu;
    QAction *actionOduncVer;
    QAction *actionOduncAl;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_5;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *edtOdncKitap;
    QLineEdit *edtOdncUyeId;
    QPushButton *btnOduncVer;
    QLabel *label_5;
    QLineEdit *edtOdncSure;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *edtUyeAd;
    QLineEdit *edtUyeSifre;
    QPushButton *btnOturum;
    QMenuBar *menubar;
    QMenu *menuGiri;
    QMenu *menuKitap;
    QMenu *menu_d_n;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(691, 597);
        QFont font;
        font.setPointSize(11);
        MainWindow->setFont(font);
        actionUye_Kayit = new QAction(MainWindow);
        actionUye_Kayit->setObjectName(QString::fromUtf8("actionUye_Kayit"));
        action_ye_Sorgu = new QAction(MainWindow);
        action_ye_Sorgu->setObjectName(QString::fromUtf8("action_ye_Sorgu"));
        actionKitap_Kayit = new QAction(MainWindow);
        actionKitap_Kayit->setObjectName(QString::fromUtf8("actionKitap_Kayit"));
        actionKitap_Sorgu = new QAction(MainWindow);
        actionKitap_Sorgu->setObjectName(QString::fromUtf8("actionKitap_Sorgu"));
        actionOduncVer = new QAction(MainWindow);
        actionOduncVer->setObjectName(QString::fromUtf8("actionOduncVer"));
        actionOduncAl = new QAction(MainWindow);
        actionOduncAl->setObjectName(QString::fromUtf8("actionOduncAl"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(50, 160, 581, 371));
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        label_3 = new QLabel(tab_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 30, 121, 51));
        label_4 = new QLabel(tab_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 100, 81, 41));
        edtOdncKitap = new QLineEdit(tab_5);
        edtOdncKitap->setObjectName(QString::fromUtf8("edtOdncKitap"));
        edtOdncKitap->setGeometry(QRect(170, 40, 151, 31));
        edtOdncUyeId = new QLineEdit(tab_5);
        edtOdncUyeId->setObjectName(QString::fromUtf8("edtOdncUyeId"));
        edtOdncUyeId->setGeometry(QRect(170, 100, 151, 31));
        btnOduncVer = new QPushButton(tab_5);
        btnOduncVer->setObjectName(QString::fromUtf8("btnOduncVer"));
        btnOduncVer->setGeometry(QRect(110, 220, 161, 41));
        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 170, 55, 16));
        edtOdncSure = new QLineEdit(tab_5);
        edtOdncSure->setObjectName(QString::fromUtf8("edtOdncSure"));
        edtOdncSure->setGeometry(QRect(170, 160, 151, 31));
        tabWidget->addTab(tab_5, QString());
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 131, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 80, 111, 21));
        edtUyeAd = new QLineEdit(centralwidget);
        edtUyeAd->setObjectName(QString::fromUtf8("edtUyeAd"));
        edtUyeAd->setGeometry(QRect(190, 30, 131, 31));
        edtUyeSifre = new QLineEdit(centralwidget);
        edtUyeSifre->setObjectName(QString::fromUtf8("edtUyeSifre"));
        edtUyeSifre->setGeometry(QRect(190, 80, 131, 31));
        btnOturum = new QPushButton(centralwidget);
        btnOturum->setObjectName(QString::fromUtf8("btnOturum"));
        btnOturum->setGeometry(QRect(360, 50, 111, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 691, 31));
        menuGiri = new QMenu(menubar);
        menuGiri->setObjectName(QString::fromUtf8("menuGiri"));
        menuKitap = new QMenu(menubar);
        menuKitap->setObjectName(QString::fromUtf8("menuKitap"));
        menu_d_n = new QMenu(menubar);
        menu_d_n->setObjectName(QString::fromUtf8("menu_d_n"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuGiri->menuAction());
        menubar->addAction(menuKitap->menuAction());
        menubar->addAction(menu_d_n->menuAction());
        menuGiri->addAction(actionUye_Kayit);
        menuGiri->addAction(action_ye_Sorgu);
        menuKitap->addAction(actionKitap_Kayit);
        menuKitap->addAction(actionKitap_Sorgu);
        menu_d_n->addAction(actionOduncVer);
        menu_d_n->addAction(actionOduncAl);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionUye_Kayit->setText(QCoreApplication::translate("MainWindow", "\303\234ye Kay\304\261t", nullptr));
        action_ye_Sorgu->setText(QCoreApplication::translate("MainWindow", "\303\234ye Sorgu", nullptr));
        actionKitap_Kayit->setText(QCoreApplication::translate("MainWindow", "Kitap Kay\304\261t", nullptr));
        actionKitap_Sorgu->setText(QCoreApplication::translate("MainWindow", "Kitap Sorgu", nullptr));
        actionOduncVer->setText(QCoreApplication::translate("MainWindow", "\303\226d\303\274n\303\247 Ver", nullptr));
        actionOduncAl->setText(QCoreApplication::translate("MainWindow", "\303\226d\303\274n\303\247 Al", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\303\234ye Kay\304\261t", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\303\234ye Sorgu", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Kitap Kay\304\261t", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Kitap Sorgu", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Kitap ID:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\303\234ye ID:", nullptr));
        btnOduncVer->setText(QCoreApplication::translate("MainWindow", "Odunc Ver", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "S\303\274re", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "\303\226d\303\274n\303\247 Verme", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Kullan\304\261c\304\261 Ad\304\261", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Kullan\304\261c\304\261 \305\236ifre", nullptr));
        btnOturum->setText(QCoreApplication::translate("MainWindow", "Oturum A\303\247", nullptr));
        menuGiri->setTitle(QCoreApplication::translate("MainWindow", "Giri\305\237", nullptr));
        menuKitap->setTitle(QCoreApplication::translate("MainWindow", "Kitap", nullptr));
        menu_d_n->setTitle(QCoreApplication::translate("MainWindow", "\303\226d\303\274n\303\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
