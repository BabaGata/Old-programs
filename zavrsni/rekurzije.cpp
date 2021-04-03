#include <iostream>
using namespace std;

long long int faktorijel(int n);
long long int r_faktorijel(int n);
long double d_r_faktorijel(int n);
int zbroj(int n);
int power(int a, int n);

int main()
{
    int broj,pot;
    cout<<"Unesite prirodni broj: "<<endl;
    cin>>broj;
    cout<<"n!="<<faktorijel(broj)<<endl;
    cout<<"Rekurzivno n!="<<r_faktorijel(broj)<<endl;
    cout<<"Double n!: "<<d_r_faktorijel(broj)<<endl;
    cout<<"Zbroj: "<<zbroj(broj)<<endl;
    cout<<"Unesite potenciju: ";
    cin>>pot;
    cout<<"n^potenciju: "<<power(broj,pot)<<endl;
    return 0;
}

long long int faktorijel(int n)
{
    long long int k = 1;
    if(n==0)
    {
        return 1;
    }
    else if(n > 0)
    {
        for(int i = n; i > 0; i--)
        {
            k*=n;
            n--;
        }
        return k;
    }
    else
    {
        return -1;
    }
}

long long int r_faktorijel(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n > 0)
    {
        return n*r_faktorijel(n-1);
    }
    else
    {
        return -1;
    }
}

long double d_r_faktorijel(int n)
{
    long double k = 1;
    if(n==0)
    {
        return 1;
    }
    else if(n > 0)
    {
        for(int i = n; i > 0; i--)
        {
            k*=(long double)n;
            n--;
        }
        return k;
    }
    else
    {
        return -1;
    }
}

int zbroj(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n>0)
    {
        return n + zbroj(n-1);
    }
    else
    {
        return -1;
    }
}

int power(int a, int n)
{
    if(n>0)
    {
        return a*power(a,n-1);
    }
    else
    {
        return 1;
    }
}




