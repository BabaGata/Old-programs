#include<iostream>
#include<iomanip>
using namespace std;

struct cvor
{
    int maticni;
    int postanski;
    int sifra;
    cvor*veza;
};

void unos(cvor*glava)
{
    int maticni;
    int postanski;
    int sifra;


        cout<<"unesite podatke o studentu: ";
         cvor*novi=new cvor;
         novi->veza=glava;
         glava=novi;
         novi->maticni=maticni;
         novi->postanski=postanski;
         novi->sifra=sifra;
}


void ispis(cvor*glava)
{
    cvor*tekuci=glava;
    while(tekuci)
    {
        cout<<setw(3)<<tekuci->maticni;
        cout<<setw(3)<<tekuci->postanski;
        cout<<setw(3)<<tekuci->sifra;
        tekuci=tekuci->veza;
    }
}
void vraca(cvor*glava)
{
    cvor*tmp=glava;
    while(tmp->sifra==NULL);
    tmp=tmp->veza;
    cout<<"nisu smjesteni: "<<
    tmp->veza=novi;
    delete tmp;


}




int main()
{
    cvor*glava=NULL;
    char p;
    int maticni;
    int postanski;
    int sifra;
    do{
    cout<<"unesite maticni broj: "<<endl;
    cin>>maticni;
    cout<<"unesite postanski: "<<endl;
    cin>>postanski;
    cout<<"unesite sifra: "<<endl;
    cin>>sifra;
    cout<<"zelite li nstaviti unos? ";
    cin>>p;
    cout<<endl;
    }while(p!='n' || p!='N');
    ispis(glava);
    vraca(glava);






    return 0;
}

