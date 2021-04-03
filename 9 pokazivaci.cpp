/*
#include <iostream>
using namespace std;

// * da dohvatimo vrijednost na & adresi
int main()
{
  int n=6;
  int *pok; //pokazuje na neki int
  pok=&n;   //usmjeren /inicijalizacija na adresu od n

  cout<<"vrijednost pokazivaca: "<<pok<<endl; // adresa n
  cout<<"vrijednost na adresi: "<<*pok<<endl; // kolko iznosi n
  cout<<"adresa pokazivaca: "<<&pok<<endl;    //bjesni brojevi
  cout<<"vrijednost n: "<<n<<endl;            //kolko iznosi n
  cout<<"adresa n: "<<&n<<endl;

  *pok=56;

  cout<<"vrijednost pokazivaca: "<<pok<<endl;
  cout<<"vrijednost na adresi: "<<*pok<<endl;
  cout<<"adresa pokazivaca: "<<&pok<<endl;
  cout<<"vrijednost n: "<<n<<endl;
  cout<<"adresa n: "<<&n<<endl;

return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
  int *pok;
  int n;  //pokazje na neki int
   cout<<"Unesite vrijednost pokazivaca...";
   cin>>n;
   pok=&n;
   cout<<endl<<"Podaci o pokazivacu --> "<<endl;
   cout<<"*pok="<<*pok<<endl;
   cout<<"pok="<<pok<<endl;
   cout<<"&pok="<<&pok<<endl;

return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main() {
const int n=5;  //konstanta se nemoze mijenjat!  pa nam c++ nis ne dopusta
 int *pok;
  pok=&n;
   cout<<endl<<"Podaci o pokazivacu... "<<endl;
     cout<<"*pok="<<*pok<<endl;
       cout<<"pok="<<pok<<endl;
         cout<<"&pok="<<&pok<<endl;
return 0; }
*/
/*
#include <iostream>
using namespace std;


int main()
{
    int *pok, zbroj=0;
    int brojevi[10]={1,2,3,4,5,6,7,8,9,10};
    pok=brojevi;
    for(int i=0;i<10;i++)
    {
        zbroj+=*(pok+i);
    }

   cout<<zbroj;
return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main() {
 int num[5]; //niz od 5 elemenata
 int *p; //pokazivac

     p=num; //usmjeravanje pokazivaèa na adresu 1. elementa niza num
         //ispis trenutne situacije adresa i vrijednosti:
    cout<<"p: "<<p<<endl;
    cout<<"*p: "<<*p<<endl;
    cout<<"&num[0]: "<<&num[0]<<endl;
    cout<<"num[0]: "<<num[0]<<endl;
  *p=10; //vrijednost prvog broja u nizu postaje 10 (jer pokazivac tamo pokazuje)
    cout<<endl<<" -- *p=10 --"<<endl;
    cout<<"p: "<<p<<endl;
    cout<<"*p: "<<*p<<endl;
    cout<<"&num[0]: "<<&num[0]<<endl;
    cout<<"num[0]: "<<num[0]<<endl;
     p++;
        *p=20;

    p=&num[2];
       *p=30;

    p=num+3;  //num je prvi +3 = tri mjesta od prvog postaje 40
        *p=40;

    p=num;
       *(p+4)=50; //sad vise ne preusmjeravamo pokazivac nego samo dohvaca vrijednost
    //ISPIS NIZA
     cout<<endl;
      for (int i=0;i<5;i++)
            {
             cout<<num[i]<<", "; //10,20,30,40,50
            }
return 0;}
*//*
#include <iostream>
using namespace std;

int main()
{
  float bodovi[6],prosjek=0;
  float *p=bodovi;

  for(int i=0;i<6;i++)
   {
    cout<<"unesi ocjene "<<endl;
    cin>>*(p+i);
    prosjek+=*(p+i);
   }

  cout<<"prosjek= "<<prosjek/6<<endl;

return 0;
}
*/
//*
#include <iostream>
using namespace std;

struct osoba
{
  int jmbg;
  string ime,prezime;
};

int main()
{
    osoba o;
    osoba *p=&o;

    cout<<"ime je "<<endl;
    getline(cin, (*p).ime);
    cout<<"prezime je "<<endl;
    getline(cin, (*p).prezime);
    cout<<"jmbg je "<<endl;
    cin>>(*p).jmbg;

    cout<<endl<<endl<<"ime: "<<p->ime<<endl;
    cout<<"prez "<<p->prezime<<endl;
    cout<<"jmbg "<<p->jmbg<<endl;



return 0;
}








