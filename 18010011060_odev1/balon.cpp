#include "balon.h"
#include "mainwindow.h"

balon::balon(QWidget *parent) : QLabel(parent)
{
    isClicked = true;
    //connect(this, SIGNAL(clicked()), this, SLOT(hareket()));
}

void balon::baloons()
{
    QTimer *timer = new QTimer(this);
    connect(this, SIGNAL(timeout()), this, SLOT());
    timer->start(250);
}

void balon::hareket()
{
    isClicked = !isClicked;
}

void balon::mousePressEvent(QMouseEvent *event)
{
    int vurulanBalon = 0, kacanBalon = 0;
    for (int i=0; i<baloonList.size(); i++)
    {
        if(event->isAccepted() ? baloonList[i]: baloonList[i])
        {
            baloonList[i]->setStyleSheet("/resource/images/patlama.jpg");
            baloonList[i]->hide();
            vurulanBalon++;
            ui->lblVurulanBalon->setText(QString::number(vurulanBalon));
        }
        else
        {
            kacanBalon++;
            ui->lblKacanBalon->setText(QString::number(kacanBalon));
        }
    }
}

void balon::move()
{
    int i=1;
    while(1)
    {
        balon *balon=new class balon(this);
        int pic = QRandomGenerator::global()->bounded(6);
        int y= QRandomGenerator::global()->bounded(2000);
        balon->setGeometry(100, y, 50, 50);
        balon->setStyleSheet("/resource/images/"+QString::number(pic)+".jpg");
        balon->setText("");
        balon->show();
        baloonList.push_back(balon);
        i++;
    }
}
