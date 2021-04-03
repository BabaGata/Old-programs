#include <iostream>
#include <iomanip>
using namespace std;

void bubbleSort (int p[], int vel);
void selectionSort(int p[], int vel);
int binarno(int p[], int vel, int key);

void zamjena(int &a, int &b)
{
    int c =a;
    a = b;
    b = c;
}

const int MAX = 10;

int main()
{
    int p[MAX], key, index;

    cout<<"UNOS NIZA"<<endl;
    for(int i=0; i<MAX; i++)
    {
        cout<<"p["<<i<<"]:";
        cin>>p[i];
    }

    selectionSort(p,MAX); //ili bubbleSort(p,MAX);
    cout<<"\nISPIS SORTIRANOG NIZA: "<<endl;
    for(int i=0; i<MAX; i++)
        cout<<setw(7)<<p[i];

    //UNOS KLJUCA PRETRAZIVANJA

    cout<<endl<<"Unesite kljuc pretrazivanja: "<<endl;
    cin>>key;

    //POZIV FUNKCIJE BINARNOG PRETRAZIVANJA
    cout<<endl<<binarno(p,MAX,key);

    //PROVJERA - ELEMENT PRONADJEN?
    if(binarno(p,MAX,key)==-1)
        cout<<"Element nije pronaden";
    return 0;
}

void bubbleSort (int p[], int vel)
{
    int tmp;
    for(int i=vel-1; i>0; i--)
    {
        for(int j=0; j<i; j++)
        {
            if(p[j] > p[j+1])
            {
                zamjena(p[j], p[j+1]);
            }
        }
    }
}

void selectionSort(int p[], int vel)
{
    int index_min;
   for(int i=0; i<vel; i++)
   {
       index_min = i;
       for(int j=i; j<vel; j++)
       {
           if(p[index_min]>p[j])
                index_min = j;
       }
        zamjena(p[index_min], p[i]);

   }
}
int binarno(int p[], int vel, int key)
{
    while(vel>1)
    {
        if(p[vel/2]==key)
        {
            return vel/2;
        }
        else if(p[vel/2+1]>key)
        {
            return binarno(&p[vel/2+1],vel/2,key);
        }
        else
        {
            return binarno(p,vel/2,key);
        }
    }

}
