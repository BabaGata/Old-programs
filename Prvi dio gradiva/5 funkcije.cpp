/*
#include <iostream>
using namespace std;

double kvadrat(double n)
{
   double c;
   c=n*n;
   return c;
}


int main(){
 double n;
 cout<<"upisi n"<<endl;
 cin>>n;

cout<<kvadrat(n);

return 0;
}
*/
/*
#include <iostream>
#include <cmath>
using namespace std;

bool modifikacija(int n,int a)
{
   if (sqrt(n)==a)
     return true;
   else
    return false;

}

int main(){
 int x,y,provjera;
 cout<<"upisi x i y"<<endl;
 cin>>x>>y;
 provjera= modifikacija(x,y);

 cout<<provjera;

return 0;}
*/
/*
#include <iostream>
using namespace std;

char posnegative(int a)
  {
    if(a>=0)
        return 'P';
    else
        return 'N';
   }

int main(){
 int x;
 cout<<"upisi x"<<endl;
 cin>>x;

 cout<<posnegative(x);


return 0;
}
*/
/*
#include <iostream>
using namespace std;

double povrsina(double a,double b)
  {
     return a*b;

  }


int main(){
  int x,y;
  cout<<"upisi x,y";
  cin>>x>>y;

 //do kraja....
retun 0;
}
*/
/*
#include <iostream>
using namespace std;

int ocjena(int n)
 {
   if (n>=50 && n<=60)
        return 2;
   else if (n>60 && n<=75)
        return 3;
   else if (n>75 && n<=90)
        return 4;
   else if (n>90)
        return 5;
 }

int main(){
   int x;
   cout<<"upsi broj bodova";
   cin>>x;

   cout<<"ocjena je : "<<ocjena(x);

return 0;
}
*/
/*
#include <iostream>
using namespace std;

void povrIopseg(double a)
 {
   double p,o;
   p=a*a;
   o=4*a;
 cout<<"p= "<<p<<endl;
 cout<<"o= "<<o<<endl;
 }

int main(){
 double x;
 cout<<"upisi stranicu kvadrata"<<endl;
 cin>>x;

 povrIopseg(x);

return 0;
}
*/
/*
#include <iostream>
using namespace std;

void zamjena(int &a,int &b) //ako necemo s & onda onaj dio sta je zakomentiran
{
    int c;
    c=a;
    a=b;
    b=c;
 //cout<<"b je "<<b<<", a je "<<a;
}


int main(){
 int a,b;
 cout<<"unesi a,b"<<endl;
 cin>>a>>b;

zamjena(a,b);
cout<<"; a= "<<a<<", b= "<<b; // i bez ovoga

return 0;
}
*/
#include <iostream>
using namespace std;

void povrsina(int a,int b)
{
    cout<<a*b;

}
void povrsina2(int a,int b,int &c)
{
    c=a*b;
}

int main(){
 int a,b,c;
 cout<<"upisi a,b"<<endl;
 cin>>a>>b;
 cout<<"povrsina(preko imena) je ";
 povrsina(a,b);
 cout<<endl;
 cout<<"povrsina(preko reference) je ";
 povrsina2(a,b,c);
 cout<<c;


return 0;
}






