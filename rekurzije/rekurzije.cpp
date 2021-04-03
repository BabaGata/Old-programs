/*#include<iostream>

using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return fact(n-1)*n;
}

int main ()
{
    int x;
    cout<<"Unesi x: ";
    cin>>x;

    cout<<fact(x);

    return 0;
}
*//*
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
*/
/*#include<iostream>

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
*/
/*#include<iostream>

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
*//*
#include<iostream>

using namespace std;

int fib(int n)
{
    if(n==1)
        return 0;
    else if (n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2); //rekurzivni poziv funkcije
}

int main()
{
    int x;
    cout<<"Unesi broj x: ";
    cin>>x;

    cout<<fib(x);
}

 *//*#include<iostream>

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
 */
#include<iostream>

using namespace std;

int Ispis(int n)
{   int i =0;
    if(n==0)
        return 0;
    else
        {
          i=Ispis(n/10)+1;
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
