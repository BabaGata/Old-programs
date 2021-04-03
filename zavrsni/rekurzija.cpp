#include <iostream>
using namespace std;

int ispisU(int n);

int main()
{
    int broj;
    cout<<"Unesite broj: ";
    cin>>broj;
    cout<<"Broj usiju je: "<<ispisU(broj);
    return 0;
}

int ispisU(int n)
{
    if(n==1)
        return 2;
    else if(n>1)
        return ispisU(n-1)+2;
    else
        return -1;
}



