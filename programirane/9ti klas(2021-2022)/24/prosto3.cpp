#include <iostream>
#include <math.h>
using namespace std;
bool prosto(int x)
{
    int c;
    for(int i=2;i<=sqrt(x);i++){ if(x%i==0) c=1;}
    if(c==1) return false;
    else return true;
}
int main () {
int chislo;
int a;
int b;
int Broi;
cout<<"Vuvedi a i b\n";
cin>>a;
cin>>b;

while(1==1){
cin>>chislo;
if(chislo==0) break;
if(prosto(chislo)==1 and chislo>a and chislo<b) Broi=Broi+1;
}
cout<<"Broqt na vuvedenite prosti chisla, koito sa v intervala (a,b) e "<<Broi;
}