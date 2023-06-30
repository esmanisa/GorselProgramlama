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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *btnParentShow;
    QPushButton *btnNoParentShow;
    QPushButton *btnParentExec;
    QPushButton *btnNoParentExec;
    QPushButton *btnResimSec;
    QTextEdit *textEdit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(318, 449);
        btnParentShow = new QPushButton(Dialog);
        btnParentShow->setObjectName(QString::fromUtf8("btnParentShow"));
        btnParentShow->setGeometry(QRect(40, 20, 231, 61));
        QFont font;
        font.setPointSize(10);
        btnParentShow->setFont(font);
        btnNoParentShow = new QPushButton(Dialog);
        btnNoParentShow->setObjectName(QString::fromUtf8("btnNoParentShow"));
        btnNoParentShow->setGeometry(QRect(40, 90, 231, 61));
        btnNoParentShow->setFont(font);
        btnParentExec = new QPushButton(Dialog);
        btnParentExec->setObjectName(QString::fromUtf8("btnParentExec"));
        btnParentExec->setGeometry(QRect(40, 160, 231, 61));
        btnParentExec->setFont(font);
        btnNoParentExec = new QPushButton(Dialog);
        btnNoParentExec->setObjectName(QString::fromUtf8("btnNoParentExec"));
        btnNoParentExec->setGeometry(QRect(40, 230, 231, 61));
        btnNoParentExec->setFont(font);
        btnResimSec = new QPushButton(Dialog);
        btnResimSec->setObjectName(QString::fromUtf8("btnResimSec"));
        btnResimSec->setGeometry(QRect(40, 310, 231, 61));
        btnResimSec->setFont(font);
        textEdit = new QTextEdit(Dialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(40, 390, 231, 31));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnParentShow->setText(QCoreApplication::translate("Dialog", "Parent S\304\261n\304\261f\304\261.show()", nullptr));
        btnNoParentShow->setText(QCoreApplication::translate("Dialog", "Parent S\304\261n\304\261f Olmadan.show()", nullptr));
        btnParentExec->setText(QCoreApplication::translate("Dialog", "Parent S\304\261n\304\261f\304\261.exec()", nullptr));
        btnNoParentExec->setText(QCoreApplication::translate("Dialog", "Parent S\304\261n\304\261f\304\261 Olmadan.exec()", nullptr));
        btnResimSec->setText(QCoreApplication::translate("Dialog", "Resim Se\303\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
