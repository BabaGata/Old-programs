#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
struct proizvod{
    int sifra;
    string naziv;
    float cijena;
    int prodano;
};

void unos(proizvod p[], int &vel); //UNOS PROIZVODA
void ispisP (proizvod p[], int vel); // ISPIS PROIZVODA
void ispisZ (proizvod p[], int vel); // ISPIS ZARADE
void maxZ (proizvod p[], int vel); // ISPIS PROIZVODA SA MAX ZARADOM

const int MAX = 50;
int main()
{
    proizvod p[MAX];
    int v;
    unos(p,v);
    int odabir;
    char izbor;
do
{
    cout<<"------ IZBORNIK ------ "<<endl;
    cout<<"1 - ispis svih podataka za sve prodane proizvode"<<endl;
    cout<<"2 - ispis ukupne zarade od svih prodanih proizvoda"<<endl;
    cout<<"3 - ispis podataka za proizvod koji je ostvario maksimalnu zaradu"<<endl;
    cout<<"Vas izbor: ";
    cin>>odabir;

    switch(odabir)
    {
    case 1: //ispis svih podataka
        {
            ispisP(p, v);
            break;
        }
    case 2: //ispis ukupne zarade
        {
            ispisZ(p,v);
            break;
        }
    case 3: //ispis podataka za proizvod koji je ostvario najvecu zaradu
        {
            maxZ(p,v);
            break;
        }
    default:
        cout<<"Krivi odabir."<<endl;
    }

    cout<<"Povratak na izbornik? d/n "<<endl;
    cin>>izbor;
}while (izbor == 'd');


    return 0;
}
void unos(proizvod p[], int &vel)
{
    cout<<"Koliko prozvoda unosis? ";
    cin>>vel;
    cout<<" ---  Unos proizvoda  ---  "<<endl;
    for(int i=0; i<vel; i++)
    {
        cout<<i+1<<". PROIZVOD"<<endl;
        cout<<"Sifra proizvoda: ";
        cin>>p[i].sifra;
        cout<<"Naziv proizvoda: ";
        cin.ignore();
        getline(cin,p[i].naziv);
        cout<<"Cijena proizvoda: ";
        cin>>p[i].cijena;
        cout<<"Broj prodanih proizvoda: ";
        cin>>p[i].prodano;
        cout<<endl;
    }
}

void ispisP (proizvod p[], int vel)
{
    cout<<" ---  Ispis proizvoda  --- "<<endl;
    for(int i=0; i<vel; i++)
    {
        cout<<i+1<<". PROIZVOD \n"<<endl;
        cout<<"Sifra proizvoda: ";
        cout<<p[i].sifra<<endl;
        cout<<"Naziv proizvoda: ";
        cout<<p[i].naziv<<endl;
        cout<<"Cijena proizvoda: ";
        cout<<p[i].cijena<<endl;
        cout<<"Broj prodanih proizvoda: ";
        cout<<p[i].prodano<<endl<<endl;
    }
}

void ispisZ (proizvod p[], int vel)
{
    float zarada = 0;
    for (int i=0; i<vel; i++)
        zarada = zarada + (p[i].cijena * p[i].prodano);

    cout<<"Ukupna zarada iznosi: "<<zarada<<endl;
}

void maxZ (proizvod p[], int vel)
{
    float maks = 0;
    int indexMax;
    for(int i=0; i<vel; i++)
    {
        if(maks < (p[i].cijena * p[i].prodano))
        {
            maks = p[i].cijena * p[i].prodano;
            indexMax = i;
        }
    }

    cout<<"Ispis proizvoda sa najvecom zaradom: "<<endl;
    cout<<"Sifra: "<<p[indexMax].sifra<<endl;
    cout<<"Naziv: "<<p[indexMax].naziv<<endl;
    cout<<"Cijena: "<<p[indexMax].cijena<<endl;
    cout<<"Prodano: "<<p[indexMax].prodano<<endl;
}


