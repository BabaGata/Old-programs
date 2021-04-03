#include<iostream>

using namespace std;

int ZbrojN(int n)
{
    if (n==1)
        return 1;
    else
        return n+ZbrojN(n-1);
}

int main ()
{
    int x;
    cout<<"Unesi x: ";
    cin>>x;

    cout<<ZbrojN(x);
    return 0;
}
