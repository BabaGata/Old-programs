#include<iostream>

using namespace std;

int Ispis(int n)
{
    if(n==0)
        return 1;
    else
        {
        Ispis(n-1);
          cout<<n;
        }
}

int main()
{
    int x;
    cout<<"Upisi x: ";
    cin>>x;

    Ispis(x);

    return 0;
}
