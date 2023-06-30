#ifndef NEWBUTTON_H
#define NEWBUTTON_H

#include <QPushButton>
#include <QMainWindow>
#include <QObject>
#include <QWidget>

class NewButton : public QPushButton
{
    Q_OBJECT
public:
    explicit NewButton(QWidget *parent = 0);
    bool tiklandimi;
public slots:
    void tikla();
};

#endif // NEWBUTTON_H
