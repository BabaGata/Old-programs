/*
#include <iostream>
 using namespace std;
  int main() {
          int *pok = new int; //(2); ALOCIRAO PROSTOR I SPREMIO BROJ 2
          cout<<"Unesite vrijednost pokazivaca...";
          cin>>*pok;
          cout<<endl<<"Podaci o pokazivacu --> "<<endl;
          cout<<"*pok="<<*pok<<endl;
          cout<<"pok="<<pok<<endl;
          cout<<"&pok="<<&pok<<endl;

          delete pok;

 return 0;
} */
 /*
#include <iostream>
using namespace std;
int main() {
          int *pok = new int;
          int *pok2=pok;
          cout<<"Unesite vrijednost pokazivaca...";
          cin>>*pok;
          cout<<endl<<"Podaci o pokazivacu --> "<<endl;
          cout<<"*pok2="<<*pok2<<endl;
          cout<<"pok2="<<pok2<<endl;
          cout<<"&pok2="<<&pok2<<endl;

          delete pok;
          pok2=NULL;
          return 0;
}
*/
#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"upisi n"<<endl;
  cin>>n;
  int *p=new int[n]; //din alok
  for(int i=0;i<n;i++)
    {
        cout<<"unesi brojeve"<<endl;
        cin>>*(p+i);

    }
   cout<<"ispis elemenata"<<endl;
   for(int i=0;i<n;i++)
    {
        cout<<" "<<*(p+i);
    }

  delete [] p; //bez zagrada bi se samo prvi element izbbrisao
return 0;
}
*//*
#include <iostream>
using namespace std;

void unos(int *p,int n)
 {
   for(int i=0;i<n;i++)
    {
        cout<<"unesi brojeve"<<endl;
        cin>>*(p+i);

    }
 }

int main() {
  int n;
  cout<<"zpisi n"<<endl;
  cin>>n;
  int *p=new int[n]; //din alok
  unos(p,n);
   cout<<"ispis elemenata"<<endl;
   for(int i=0;i<n;i++)
    {
        cout<<" "<<*(p+i);
    }

  delete [] p; //bez zagrada bi se samo prvi element izbbrisao
return 0;
}
*//*
#include <iostream>
using namespace std;
int main() {

  int n;
  double *mini= new double;
  double *maksi=new double(0);
  double *prosjek=new double(0);
  cout<<"koloko dana je mjesec imao?"<<endl;
  cin>>n;
  int *p=new int[n];
  for(int i=0;i<n;i++)
    {

        cout<<"unesi temperaturu "<<i+1<<". dana"<<endl;
        cin>>*(p+i);
        if(i==0)
        {
            *mini=*(p+i);
            *maksi=*(p+i);
        }
        else
        { if(*mini>*(p+i))
            *mini=*(p+i);
         if(*maksi<*(p+i))
            *maksi=*(p+i);
        }
       *prosjek+=*(p+i);
    }
   *prosjek=*prosjek/n;

   cout<<"prosjecna temp je: "<<*prosjek<<endl;
   cout<<"max temp je "<<*maksi<<endl;
   cout<<"min temp je "<<*mini<<endl;

   delete [] p;
   delete mini;
   delete maksi;
   delete prosjek;

 return 0;
}
*/
#include <iostream>
using namespace std;

struct zaposlenik{
 int jmbg;
 double koef;
};

void unos(zaposlenik *p,int n)
{
  for(int i=0;i<n;i++)
    {
        cout<<"jmbg:"<<endl;
        cin>>(*(p+i)).jmbg;
        cout<<"koeficijent:"<<endl;
        cin>>(*(p+i)).koef;
    }
}

void ispis(zaposlenik *p,int n)
{ cout<<"ispis zaposlenika"<<endl;
  for(int i=0;i<n;i++)
    {
        cout<<"jmbg:"<<(p+i)->jmbg<<endl;
        cout<<"koeficijent:"<<(p+i)->koef<<endl;
    }
}

int main() {
    int n;
  cout<<"unesi broj zaposlenika"<<endl;
  cin>>n;
  zaposlenik *p=new zaposlenik[n];

  unos(p,n);
  ispis(p,n);


 delete [] p;
return 0;
}








