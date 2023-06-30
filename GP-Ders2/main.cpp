#include "dialog.h"

#include <QApplication>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class AbstractCalisan{
    virtual void ZamAlsinMi()=0;
};

class Calisan:AbstractCalisan
{
public:
    string Ad;
    string Firma;
    int Yas;

    Calisan(string ad, string firma, int yas){
        this->Ad = ad;
        this->Firma = firma;
        this->Yas = yas;
    }

    void setAd(string ad)
    {
        Ad = ad;
    }

    string getAd()
    {
        return Ad;
    }

    void ZamAlsinMi()
    {
        if (this->Yas > 30)
            cout << "Zam orani yuzde 20"<<endl;
        else
            cout << "Zam orani yuzde 10"<<endl;
    }

    void ozEkranaYaz()
    {
        cout << "Calisanin adi:"<<Ad<<endl;
        cout << "Calisanin yasi:"<<Yas<<endl;
        cout << "Calisanin firmasi:"<<Firma<<endl;
    }
};

class Yazilimci:Calisan{
public:
    string progLang;
    Yazilimci(string ad, string firma, int yas, string ProgLang):Calisan(ad, firma, yas)
    {
        progLang = ProgLang;
    }

};

int main(int argc, char *argv[])
{
    Calisan calisan1("Ali", "MyComp", 35);
    calisan1.ozEkranaYaz();

    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
