#include "newbutton.h"

NewButton::NewButton(QWidget *parent):QPushButton(parent)
{
    tiklandimi = true; // PENCERE İLK AÇILDIĞINDA BUTONLAR HAREKET ETMEYE BASLAR deger true oldugu için
    connect(this, SIGNAL(clicked()), this, SLOT(tikla()));
}

void NewButton::tikla()
{
    tiklandimi = !tiklandimi;
}
