/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int sekvencijalno(int p[],int vel,int key)
{
    for(int i=0;i<vel;i++)
    {
        if(key==p[i])
            return i;
    }
    return -1;
}

int main(){

int p[10],n=10,el,index;
srand(time(NULL));
 for(int i=0;i<n;i++)
    p[i]=rand()%500+1;
cout<<"koji element trazite?";
cin>>el;

index=sekvencijalno(p,n,el);

if(index==-1)
 cout<<"trazeni element se ne nalazi u listi "<<endl;
else
    cout<<"trazeni element je na poziciji: "<<index+1<<endl;

    cout<<"ispis elemenata polja: "<<endl;
    for(int i=0;i<n;i++)
        cout<<setw(5)<<p[i];
return 0;
}
*//*
#include <iostream> //modifikacijaaa
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

bool sekvencijalnoB(int p[],int vel,int key, int &index)
{
    for(int i=0;i<vel;i++)
    {
        if(key==p[i])
           {
            index= i;
            return true;
           }
    }
    return false;
}

int main(){

int p[10],n=10,el,index;
bool provjera;
srand(time(NULL));
 for(int i=0;i<n;i++)
    p[i]=rand()%500+1;
cout<<"koji element trazite?";
cin>>el;

provjera=sekvencijalnoB(p,n,el,index);

if(provjera==false)
 cout<<"trazeni element se ne nalazi u listi "<<endl;
else
    cout<<"trazeni element je na poziciji: "<<index+1<<endl;

    cout<<"ispis elemenata polja: "<<endl;
    for(int i=0;i<n;i++)
        cout<<setw(5)<<p[i];
return 0;
}
*//*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void zamjena(int &a,int &b){
  int c=a;
  a=b;
  b=c;
 }
void bubble(int p[],int vel)
{
  for(int i=vel-1; i>=0;i--)
    for(int j=0;j<i;j++)
     {
       if(p[j]>p[j+1])// za drugi smjer samo ovdje <
       {
         zamjena(p[j],p[j+1]);
       }
     }
}

int main(){

int p[10],n=10,el,index,key;

cout<<"unesi 10 brojeva"<<endl;
for(int i=0;i<10;i++)
 {
  cin>>p[i];
 }
 bubble(p,n);
 cout<<"nakon sort"<<endl;
 for(int i=0;i<n;i++)
    cout<<"  "<<p[i];
//ne radi nis zivo
return 0;
}
*/
#include <iostream>
using namespace std;

 int binarnoPretr(int p[],int vel,int key)
 {
     int pocetak=0,sredina,kraj=vel-1;
     while(pocetak<=kraj)
     {
        sredina=(pocetak+kraj)/2;
        if(key<p[sredina])
            kraj=sredina-1;
        else if(key>p[sredina])
            pocetak= sredina +1;
        else
            return sredina;
     }
     return -1;
 }
 int main()
 {
     int p[10]={1,2,3,4,5,6,7,8,9,10},n=10,el,index,key;
     cout<<"unos kljuca: ";
     cin>>key;

     index=binarnoPretr(p,n,key);

     if(index==-1)
        cout<<"el nije u listi"<<endl;
     else
        cout<<"el je na poziciji "<<index+1<<endl;

return 0;
 }







