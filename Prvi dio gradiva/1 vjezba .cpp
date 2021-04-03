/*
#include <iostream>
using namespace std;
int main(){
int age;
cout << "Hello world!:-)\nYour age: ";
cin>>age;
return 0;
}
*/

/*#include <iostream>
using namespace std;
int main(){

    int kod;
    cout<< "Operacija \"BLUEBIRD\" je aktivirana!"<<endl; // backslash da prepoizna navodnike ko navodnike a ne ko kraj
    cout<<"Agentu, unesi svoj kod:";
    cin>>kod;
    cout<<"Unio si" <<kod<<endl;
    cout<<"Kod verificiran! Nastavi s planom Z3!";


    return 0;
}
*/

/*#include <iostream>
using namespace std;
int main(){
    int sat,minute;
    cout<<"koliko je sati?"<<endl;
    cin>>sat;
    cout<<"koliko je minuta?"<<endl;
    cin>>minute;
    cout<<"Vrijeme:"<<sat<<":"<<minute;

    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main(){
    int a,b,zbroj;

    cout<<"unesi a i b"<<endl;
    cin>>a>>b;
    zbroj= a + b;
    cout<<"Zbroj je: "<<zbroj<<endl;

    return 0;
}
*/

/*
#include <iostream> //4,5,6 zadatak
using namespace std;
int main(){
    double a,b,zbroj,razlika,umnozak,ostatak;
    double kvocjent2;

    cout<<"unesi a i b"<<endl;
    cin>>a>>b;
    zbroj= a + b;
    razlika= a - b;
    umnozak= a * b;
    kvocjent2= static_cast<double>(a)/b //stavlja int u nedecimalno da rjesenje moze doc u decimali,samo u ovom slucaju, a ce i ddalje bit cijeli br
   // ostatak= a % b;

    cout.setf(ios::fixed); //Specifikacija zapisa fiksne toèke
    cout.setf(ios::showpoint); //Decimalna toèka æe uvijek biti prikazana
    cout.precision(1); //1 decimalno mjesto æe uvijek biti prikazano

    cout<<"Zbroj je: "<<zbroj<<endl;
    cout<<"razlika je: "<<razlika<<endl;
    cout<<"umnozak je: "<<umnozak<<endl;
    cout<<"kvocjent je: "<<kvocjent2<<endl;
   // cout<<"ostatak je: "<<ostatak<<endl;

    return 0;
}
*/
/*
#include <iostream>
#include<cmath> //mat funkcije
using namespace std;
int main(){
    float r,p;
    const float pi=3.14159;
    cout<<"polumjer kruga je: "<<endl;
    cin>>r;
    p=r*r*pi;
    cout<<"povrsina je:"<<p<<endl;

    return 0;

    }
 */
 #include <iostream>
#include <iomanip>
using namespace std;

struct kolegij
    {
        int sifra,brVjezbi,brPredavanja;
        char naziv[20];
        kolegij *veza;
    };

void unos(kolegij **glava)      // uz svaku glavu, jedan ekstra *
    {
        kolegij *novi=new kolegij;
        cout<<"unesite naziv kolegija"<<endl;
        cin>>novi->naziv;
        cout<<"unesite sifru,broj sati vjezbi tjedno i broj sati predavanja tjedno"<<endl;
        cin>>novi->sifra>>novi->brVjezbi>>novi->brPredavanja;
        novi->veza=*glava;      //PAZI!!
        *glava=novi;            //PAZI!!
        delete novi;
    }

void ispis(kolegij *glava)
    {   //ja cu po svoju kako radi pa sad ti...
        //kolegij *rep=new kolegij;     ne treba ti skroz struktura, vec samo
        //varijabla istog tipa kao i glava da ti bude kao neki pomocni

        kolegij *rep;
        rep = glava;
        //rep->veza=glava;      prakticki je isto al mi ovako gore radi
        while(rep!=NULL)
        {
            cout<<"naziv: "<<rep->naziv<<" sifra: "<<rep->sifra<<" broj vjezbi: "<<rep->brVjezbi<<" broj predavanja: "<<rep->brPredavanja<<endl;
            rep=rep->veza;
        }
    }

int BrPredmeta(kolegij *glava)
{//sve isto vrijedi kao i gore
    //kolegij *rep=new kolegij;
    kolegij *rep;
    rep = glava;    //ovo je falilo
    int brojac=0;
    while(rep!=NULL)
        {
           if((rep->naziv[0]=='p')||(rep->naziv[0]=='P'))
              brojac++;

            rep=rep->veza;
        }
    return brojac;
}

int main(){
    kolegij *glava=NULL;
    //zelim se rijesiti one do-while u funkciji za upis, jer ona samo komplicira
    //i zezne mi glavu i NULL... nekako... zato do while u mainu:
    int n;
    do{
        unos (&glava);  //ucili smo, kad želiš mijenjati glavu u mainu onda treba
                        //poslat adresu i u funkciji imat **
        cout<<"Upisite 0 ili 1 > ";
        cin>>n;
    } while (n != 0);
    ispis(glava);

    cout<<"broj predmeta cije ime pocinje s p ili P je: "<<BrPredmeta(glava);

    return 0;
}



