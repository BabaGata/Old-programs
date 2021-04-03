#include <iostream>
using namespace std;

struct ocjene
{
    int kolokvij[4];
    int dz[2];
};

void unos(ocjene predmet[],int broj);
void ispis(ocjene predmet[],int broj);
//void ovf();

int main ()
{
    /*
    for(int i = 0; i < 1000; i++)
    {
        for(int j = 0; j < 1000; j++)
        {
            ovf();
        }
    }
    */

    int duljina;
    cout<<"Unesite broj ucenika:"<<endl;
    cin>>duljina;

    ocjene *pokazivac;
    pokazivac = new ocjene[duljina];

    unos(pokazivac,duljina);
    cout<<endl<<endl<<"----------------- Ispis -----------------"<<endl;
    ispis(pokazivac,duljina);

    delete [] pokazivac;

    /*
    ocjene programiranje[10];
    unos(programiranje,2);
    cout<<endl<<endl<<"-----------------Ispis---------------------"<<endl;
    ispis(programiranje,2);
    */

    return 0;
}

void unos(ocjene predmet[],int broj)
{
    for(int k = 0; k < broj; k++)
    {
        for(int i = 0; i < 4; i++)
        {
            cout<<"Unesite ocjenu iz kolokvija "<<i+1<<": ";
            cin>>predmet[k].kolokvij[i];
        }
        for(int i = 0; i < 2; i++)
        {
            cout<<"Unesite ocjenu iz DZ "<<i+1<<": ";
            cin>>predmet[k].dz[i];
        }
    }
}

void ispis(ocjene predmet[],int broj)
{
    int pros;
    for(int k = 0; k < broj; k++)
    {
        pros=0;
        for(int i = 0; i < 4; i++)
        {
            cout<<"Ocjena iz kolokvija "<<i+1<<": ";
            cout<<predmet[k].kolokvij[i];
            pros+=predmet[k].kolokvij[i];
            cout<<endl;
        }
        for(int i = 0; i < 2; i++)
        {
            cout<<"Ocjena iz DZ "<<i+1<<": ";
            cout<<predmet[k].dz[i];
            pros+=predmet[k].dz[i];
            cout<<endl;
        }
        cout<<endl<<"Prosjek je: "<<(double)pros/6<<endl;
    }

}

/*void ovf()
{
    int *pok;
    pok = new int[1000];
}
*/

