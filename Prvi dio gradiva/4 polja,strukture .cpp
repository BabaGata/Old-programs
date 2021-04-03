 /*
#include <iostream>
using namespace std;
int main(){
  float mjesec[12],ukupno=0,mini,maksi=0;
  for(int i=0;i<12;i++)
     {
         cout<<"unesi trosak struje za"<<i+1<<"mjesec ";
         cin>>mjesec[i];

         if(mjesec[i]>maksi)
            maksi=mjesec[i];

         if(i==0)
            mini=mjesec[i];

         if(mjesec[i]<mini)
            mini=mjesec[i];

         ukupno+=mjesec[i];
     }
  cout<<"ukupni trosak je "<<ukupno<<endl;
  cout<<"najmanji trosak je u mjesecu "<<endl;
   for(int i=0;i<12;i++)
   {
       if(mjesec[i]==mini)
        cout<<i+1<<endl;
   }
   cout<<"najveci trosak je u mjesecu "<<endl;
    for(int i=0;i<12;i++)
    {
        if(mjesec[i]==maksi)
            cout<<i+1<<endl;
    }


return 0;
}    */

/*
#include <iostream>
#include <string>
using namespace std;

int main(){
 string niz= "dobrodosli";
 string ime,pozdrav;

 cout<<"unesi ime ";
 getline(cin,ime); //upise sve u tom redu pod varijablu ime, a ne samo do raznaka kako bi inace

 pozdrav=niz +" "+ime+"!";

 cout<<pozdrav<<endl;
 cout<<"broj znakova niza: "<<pozdrav.size()<<endl; //.size pise koliko znakova je u stringu

return 0;
}
*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 int matrica[5][5];
  for(int i=0;i<5;i++)
   {for(int j=0;j<5;j++)
     {if(j==i)
       {
        matrica[i][j]=0;
       }
      else if(i<j)
       {matrica[i][j]=1;
       }
      else
       {
        matrica[i][j]=2;
       }
       cout<<setw(5)<<matrica[i][j];
      }
      cout<<endl;
    }



return 0;
}
*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int matrica[10][10],n;
    do{
        cout<<"unesi n ";
        cin>>n;
    }while(n<1 || n>10);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"unesi broj";
            cin>>matrica[i][j];
        }
    }
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        cout<<setw(5)<<matrica[i][j];
        }
        cout<<endl;
    }
    int suma=0;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            {
        if (i==j)
        {
            cout<<setw(5)<<matrica[i][j];
            suma+=matrica[i][j];
        }
        else
            cout<<setw(5)<<" ";
            }
            cout<<endl;
    }
    cout<<"zbroj na gl dijagon"<<suma<<endl;

return 0;
}
*/
 /*
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct student{
 string ime,prezime;
 int ocjena;
};

int main(){
    const int maxi=1000;
    student s[maxi];
    int n;
    float zbroj =0,prosjek;

    cout<<"koliko studenata";
    cin>>n;

    for(int i=0; i<n;i++)
    {
        cout<<i+1<<".student: \n-----------"<<endl;
        cout<<"ime: ";
        cin.ignore();
        getline(cin,s[i].ime);
        cout<<"prezime";
        getline(cin,s[i].prezime);
        cout<<"ocjena";
        cin>>s[i].ocjena;

        zbroj+=s[i].ocjena;
    }
    zbroj+=zbroj/n;
    cout<<"prosjek je"<<zbroj;



return 0;
}   */







