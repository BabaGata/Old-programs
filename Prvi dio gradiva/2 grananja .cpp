//vježba 2
/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x1,x2,y1,y2,d;
    cout<< "unesi koordinate prve toèke"<<endl;
    cin>>x1>>y1;
    cout<<"unesi koordinate druge toèke"<<endl;
    cin>>x2>>y2;
    d=sqrt(pow((x2-x1),2)+ pow((y2-y1),2));
    cout<<"d="<<d<<endl;

    return 0;
}
*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"unesi a";
    cin>>a;
    cout<<"unesi b";
    cin>>b;
    cout<<"unesi c";
    cin>>c;

    bool test=(a%2==0 && a==2*b) ||(c<1 || c>20);

    cout<<test<<endl;
    return 0;
}


/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;
    cout<<"upisi broj"<<endl;
    cin>>a;
    if(a%2==0)
        cout<<"broj je paran"<<endl;
    else
        cout<<"broj je neparan"<<endl;

    return 0;
}
*/

/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a;
cout<<"koliko imas godina?"<<endl;
cin>>a;
if(a>=0 && a<=6)
    cout<<"dijete"<<endl;
else if(a>=7 && a<=14)
    cout<<"osnovnoskolac"<<endl;
else if(a>=15 && a<=18)
    cout<<"srednoskolac"<<endl;
else if(a>=19)
    cout<<"odrasla osoba"<<endl;

    return 0;
}
*/

/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int godina;
    cout<<"upisi godinu"<<endl;
    cin>>godina;
    if(godina%4==0 && godina%100!=0) //mogla sam umjesto else if samo pod if stavit ili
        cout<<"godina je prijestupna"<<endl;
    else if(godina%100==0 && godina%400==0)
        cout<<"godina je prijestupna"<<endl;
    else
        cout<<"godina nije prijestupna"<<endl;

    return 0;
}
*/

/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b;
    int odabir;
    cout<<"unesi dva decimalna broja"<<endl;
    cin>>a>>b;
    cout<<"Odabir:"<<endl;
    cout<<"1. Zbrajanje(+)"<<endl;
    cout<<"2. pduzimanje (-)"<<endl;
    cout<<"3. Mnozenje (*)"<<endl;
    cout<<"4. dijeljenje (/)"<<endl;
    cin>>odabir;

    switch(odabir){
case 1:
    cout<<"zbroj je: "<<a+b<<endl;
    break;
case 2:
    cout<<"razlika je: "<<a-b<<endl;
    break;
case 3:
    cout<<"umnozak je: "<<a*b<<endl;
    break;
case 4:
    if(b==0)
        cout<<"dijeljenje s 0 nije definirano."<<endl;
    else
        cout<<"kvocjent je: "<<a/b<<endl;
    break;
default:
    cout<<"pogrešan unos"<<endl;
    }
    return 0;
}
*/
/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b;
    char odabir;
    cout<<"unesi dva decimalna broja"<<endl;
    cin>>a>>b;
    cout<<"Odabir:"<<endl;
    cout<<"1. Zbrajanje(+)"<<endl;
    cout<<"2. pduzimanje (-)"<<endl;
    cout<<"3. Mnozenje (*)"<<endl;
    cout<<"4. dijeljenje (/)"<<endl;
    cin>>odabir;

    switch(odabir){
case '1':
case'+':
    cout<<"zbroj je: "<<a+b<<endl;
    break;
case '2':
case'-':
    cout<<"razlika je: "<<a-b<<endl;
    break;
case '3':
case'*':
    cout<<"umnozak je: "<<a*b<<endl;
    break;
case '4':
case '/':
    if(b==0)
        cout<<"dijeljenje s 0 nije definirano."<<endl;
    else
        cout<<"kvocjent je: "<<a/b<<endl;
    break;
default:
    cout<<"pogrešan unos"<<endl;
    }
    return 0;
}    */






