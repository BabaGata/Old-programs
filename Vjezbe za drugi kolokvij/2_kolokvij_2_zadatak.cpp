#include <iostream>
#include <string>
using namespace std;

struct guest{
    string prezime;
    int brOsobne,brSobe,brNocenja;
};

int output(int br)
    {
        int iznos;
        iznos=br*720;
        return iznos;
    }

void input(guest gost)
    {
        cout<<"prezime, broj sobe i broj nocenja su :"<<endl;
        getline(cin,gost.prezime);
        cin>>gost.brSobe>>gost.brNocenja;
        cout<<gost.prezime<<" "<<gost.brSobe<<" "<<gost.brNocenja<<endl;
        cout<<"ukupno za platiti je: "<<output(gost.brNocenja)<<endl;

    }

int main(){

guest gost;

input(gost);

return 0;
}
