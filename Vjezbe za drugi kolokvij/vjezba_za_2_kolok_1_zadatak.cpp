#include <iostream>
using namespace std;

double racunanje_rate(double stara, double nova)
    {
       int rata;
       rata=(nova-stara)/stara*100;
       return rata;
    }

void ispis(double stara,double nova)
    {
        cout<<"Rata je "<<racunanje_rate(stara,nova)<<'%'<<endl;
    }

void unos(double stara,double nova)
    {
        cout<<"kolika je stara a koliko nova cijena?"<<endl;
        cin>>stara;
        cin>>nova;
        ispis(stara,nova);
    }

int main(){
 double stara,nova;

 unos(stara,nova);

return 0;
}
