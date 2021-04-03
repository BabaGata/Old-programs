#include<iostream>

using namespace std;

int ispisU(int n)
{
    if (n==1)
        return 2;
    else
        return 2+ispisU(n-1);
}

int main()
{
    int x;
    cout<<"Unesi broj zeceva:";
    cin>>x;

    cout<<"Broj usiju iznosi "<<ispisU(x)<<".";

    return 0;
}
