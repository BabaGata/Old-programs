/*
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
        cout<<"rata je "<<racunanje_rate(stara,nova)<<endl;
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
*//*
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
 *//*
#include <iostream>
using namespace std;

void printMax(int r,int s,int retci[],int stupci[])
    {
      cout<<"max po retcima:"<<endl;
        for(int i=0;i<r;i++)
        {
            cout<<retci[i]<<endl;
        }
      cout<<"max po stupcima: ";
       for(int i=0;i<r;i++)
        {
            cout<<stupci[i]<<" ";
        }
    }

void writeM(int r,int s,int matrica [][10])
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<s;j++)
            {
                cout<<matrica[i][j]<<"  ";
            }
          cout<<endl;
        }
    }

void findMax(int r,int s,int matrica[][10])
    {
      int retci[10],stupci[10];
      int maxS,maxR;
        for(int i=0;i<r;i++)
        {
          maxR=matrica[i][0];
            for(int j=0;j<s;j++)
            {
              if(matrica[i][j]>maxR)
               {
                    maxR=matrica[i][j];
               }
            }
             retci[i]=maxR;
        }

        for(int j=0;j<s;j++)
        {
          maxS=matrica[0][j];
            for(int i=0;i<r;i++)
            {
              if(matrica[i][j]>maxS)
                {
                    maxS=matrica[i][j];
                }
            }
            stupci[j]=maxS;
        }
    printMax(r,s,retci,stupci);
    }

void inputM(int r,int s)
    {
      int matrica[10][10];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<s;j++)
            {
                cout<<"element "<<i<<","<<j<<":"<<endl;
                cin>>matrica[i][j];
            }
        }
      writeM(r,s,matrica);
      findMax(r,s,matrica);
    }

void input(int r,int s)
    {
        cout<<"br redaka i stupaca "<<endl;
        cin>>r>>s;
        inputM(r,s);
    }

int main(){
  int r,s;

  input(r,s);


return 0;
}
*/
