/*
#include <iostream>
using namespace std;
int main (){
    double a,b,zbroj,razlika,umnozak,kvocjent;
    char c;
    cout<<"unesi 2 broja"<<endl;
    cin>>a>>b;
    cout<<"1. zbrajanje"<<endl;
    cout<<"2. oduzimanje"<<endl;
    cout<<"3. mnozenje"<<endl;
    cout<<"4. dijeljenje"<<endl;
    cin>>c;
    switch(c)
    {
      case '1': zbroj=a+b;
              cout<<zbroj;
              break;
      case '+':
          zbroj=a+b;
              cout<<zbroj;
              break;
      case '2': razlika=a-b ;
              cout<<razlika;
              break;
      case '3': umnozak=a*b;
              cout<<umnozak;
              break;
      default :
              kvocjent=a/b;
              cout<<kvocjent;
    }


    return 0;
} */
/*#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main (){
   srand(time(0));
   int br,a;

    do{
        br=rand()%100+1;
        cout<<"unesi br iz [1,100]"<<endl;
        cin>>a;
      if(a<br)
        cout<<a<<" je manje od "<<br<<endl;
      else if (a>br)
        cout<<a<<" je vece od "<<br<<endl;
    }while (br!=a) ;
   if(br=a)
        cout<<"brojevi "<<a<<" i "<<br<<" su jednaki"<<endl;

 return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main (){
    int i,j,k;
   double ukupno=0,mini,maksi=0;
   double racun[12];
   for(i=0;i<12;i++)
     {
       cout<<"upisi iznos racuna za "<<i+1<<". mjesec"<<endl;
       cin>>racun[i];
       ukupno+=racun[i];

       if(racun[i]>maksi)
       {j=i;
         maksi=racun[i];}

       if(i==0)
       {
           k=i;
         mini=racun[i] ; }
       if(racun[i]<mini)
       {k=i ;
         mini=racun[i];}

     }
     cout<<"ukupni trosak je: "<<ukupno<<endl;

     cout<<"najveci trosak bio je u ";

        cout<<j+1<<". mjesecu"<<endl;

     cout<<"najmanji trosak bio je u ";

        cout<<k+1<<". mjesecu"<<endl;

 return 0;
}
   */
/*
#include <iostream>
#include <string>
using namespace std;
int main(){
    string a="Dobrodosli, " ;
    string b,c;
    cout<<"upisite svoje ime"<<endl;
    getline(cin,b);
    c=a+b ;
    cout<<c ;
    cout<<c.size();

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
  {
    for(int j=0;j<5;j++)
    {
      if(j==i)
            matrica[i][j]=0;
      else if(j>i)
            matrica[i][j]=1;
      else
            matrica[i][j]=2;
      cout<<setw(5)<<matrica[i][j];
     }
   cout<< endl;
  }
return 0;
}
*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
   int n,zbroj=0;
   int polje[10][10];
   do{
    cout<<"unesi n "<<endl;
    cin>>n;
    } while(n<1 || n>10);
   cout<<"unesi elemente"<<endl;
   for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {

          cin>>polje[i][j];
       }
    }
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
       {
           //cout<<setw(3)<<polje[i][j];
           if(i==j)
            {cout<<setw(5)<<polje[i][j];
            zbroj+=polje[i][j] ; }
           else
            cout<<setw(5)<<" ";

       }
       cout<<endl;
    }
  cout<<zbroj;

return 0;
}
 */
#include <iostream>
#include <cstring>
using namespace std;
int main(){
   char recenica[200];
   int n;
   cout<<"upisi";
   cin.getline(recenica,200) ;
   n=strlen(recenica);
    for(int i=0;i<n;i++)
    {
        if(recenica[i]=='a' || recenica[i]=='e' ||recenica[i]=='i' || recenica[i]=='o' || recenica[i]=='u')
          recenica[i]='?';

        if(recenica[i]>='0' && recenica[i]<='9')
            recenica[i]='*';
    }
    cout<<recenica;


return 0;
}









