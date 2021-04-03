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
