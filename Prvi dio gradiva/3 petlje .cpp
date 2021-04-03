/*
#include <iostream>
using namespace std;
int main()
{
   int broj;
   cout<<"Upisi broj studenata"<<endl;
   cin>>broj;
   if (broj<24)
    cout<<"u ucionicu jos stane "<<24-broj<<" studenata"<<endl;
   else if(broj>24)
    cout<<broj-24<<" studenata je ostalo bez racunala"<<endl;
   else
    cout<<"kapacitet je popunjen"<<endl;

   return 0;

}
*/

/*
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"upisi cijeli broj n"<<endl;
  cin>>n;

    while (n<1 || n>30)
    {
       cout<<"unesite n u intervalu [1,30]"<<endl;
       cin>>n;
    }
  for(int i=n;i>=1;i--)
    {
      cout<<i<<endl;
    }
    /*umjesto for sam mogla int j=n; do{ cout<<j<<endl;j--;}while(j>0);*/
  /*  return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
   int br,ocjena,suma=0;
   cout<<"koliko predmeta slusas?"<<endl;
   cin>>br;
    while(br<0)
    {
        cout<<"krivi unos,upisi ponovno"<<endl;
        cin>>br;
    }
   for(int i=1;i<=br;i++)
    {
        cout<<"upisi ocjenu"<<endl;
        cin>>ocjena;
        suma=suma+ocjena;// suma+=ocjena
    }
    cout<<"prosjek je: "<<static_cast<double>(suma)/br<<endl;
        return 0;
    }
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int brRedaka=5,brStupaca=5;
    for(int i=1; i<=5;i++)
     {
         for(int j=1;j<=5;j++)
         {
            if(j==i)  // pazit na jednakooooo
             cout<<setw(3)<<"0";
            else if(j>i)
             cout<<setw(3)<<"1";
            else
             cout<<setw(3)<<"2";
           // cout<<setw(5)<<i<<","<<j; //setw da ih odvoji ili \t
          }
        cout<<endl;
      }

 return 0;
}
/* DODATAK
#include <iostream>
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
} */







