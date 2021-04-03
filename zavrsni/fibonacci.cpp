#include <iostream>
using namespace std;

long long Fib(int n,long long int p[],int izracunati[]);

int main()
{
    int broj;
    cout<<"Unesite broj: ";
    cin>>broj;
    long long int FIB[broj];

    int calc[broj];
    for(int i = 0; i < broj; i++)
    {
        calc[i]=0;
    }
    Fib(broj,FIB,calc);

    for(int i = 0; i < broj; i++)
    {
        cout<<FIB[i]<<" "<<endl;
    }
    return 0;
}

long long int Fib(int n,long long int p[],int izracunati[])
{
    if(n==0)
        p[n]=0;
    else if(n==1)
        p[n]=1;
    else
    {
       if(izracunati[n]==0) //????
        {
            p[n]=Fib(n-1,p,izracunati)+Fib(n-2,p,izracunati);
        }
    }
    return p[n];
}
