#include<iostream>

using namespace std;

int power(int a,int n)
{
    if (n==1)
        return a;
    else
        return a*power(a,n-1);
}

int main ()
{
    int x;
    int y;
    cout<<"Unesi x:";
    cin>>x;
    cout<<"Unesi y:";
    cin>>y;

    cout<<power(x,y);

    return 0;
}
