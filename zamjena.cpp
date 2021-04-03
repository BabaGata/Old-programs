#include <iostream>
using namespace std;
void zamjena(int *a,int *b){
int pomocna=*a;
*a=*b;
*b=pomocna;

}
int main()
{
 int a,b;
 cin>>a;
 cin>>b;
 zamjena(&a,&b) ;
cout<<a<<" "<<b;
return 0;
}
