/*
#include <iostream>
using namespace std;

struct cvor{
 int n;
 cvor *veza;
};

struct proizvod{
 string naziv;
 int sifra;
double cijena;
};

void ispisiListu(cvor* lista)   //OBILAZAK I ISPIS LISTE
 {
    cvor* tekuci=lista;     //pokazivac s kojim cemo prelaziti listu usmjerimo na pocetak, tj. tamo di glava pokazuje
    while (tekuci !=0){
        cout<<tekuci->n<<endl; //ispise se podatak cvora na koji tekuci pokazuje
        tekuci=tekuci->veza;  //prebacuje se na sljedeci cvor, tj. pokazivac tekuci sada pokazuje tamo kamo pokazuje i VEZA TRENUTNOG cvora
    }
 }

int main(){
  cvor* lista=NULL;
  int a;

do{    // dodavanje na pocetak
    cout<<"upisi br ili 0 za kraj: ";
    cin>>a;
    cvor* novi= new cvor;  //"novi" je POKAZIVAC na cvor koji smo napravili s operatorom new
    novi->n=a;            // podatak u novom cvoru postane a
    novi->veza=lista;    //veza mu je veza od liste tj glave tj. taj NOVI CVOR pokazuje tamo di je glava prije pokzivala (na bivsi prvi element)
    lista=novi;   //glava vise nije usmjerena na bivsi prvi clan liste nego na NOVI CVOR (on je sad prvi clan liste)
  }while(a!=0);

ispisiListu(lista);

return 0;
}
*/

#include <iostream>
using namespace std;

struct cvor{
 int n;
 cvor *veza;
};

void ispisiListu(cvor* lista)
 {
    cvor* tekuci;
    tekuci=lista;
    while (tekuci !=0){
        cout<<tekuci->n<<endl;
        tekuci=tekuci->veza;
    }
 }

int main(){
  cvor* lista=NULL;  //glava
  int a;

do{       // DODAVANJE NA KRAJ
    cout<<"upisi br ili 0 za kraj: ";
    cin>>a;
    cvor* novi= new cvor; //alocira se mem prostor za novi cvor; "novi" je pokazivac na taj cvor
    novi->n=a;           //novi cvor ima vrijednost "a" koju smo unjeli
    novi->veza=NULL;   //"veza", od naseg novog cvora(strukture) na koji POKAZIVAC "novi" pokazuje, postaje NULL
    if (lista !=0)    //ako nasa glava nije NULL tj. ako lista nije prazna
        {
          cvor* rep = lista; //stvaramo novi POKAZIVAC koji se zove "rep" i usmjeren je tamo di je lista usmjerena (ako lista nije NULL)
            while (rep->veza !=0)   //dok cvor na koji rep pokazuje nije NULL
                {
                    rep = rep->veza; //rep ce pokazivati tamo di pokazuje veza od cvora tj. prebacit ce se na sljedeci cvor->sece po listi
                }
            rep->veza = novi; //kad dode do krja, tj. rep pokazuje na NULL, tada ce veza od repa pokazivati na novi cvor
        }
    else
        lista =novi; //ako lista je prazna, tada GLAVU USMJERIMO tamo di pokazuje novi pokazivac, tj. na nas novi cvor

    delete novi;
  }while(a!=0);

ispisiListu(lista);

return 0;
}

