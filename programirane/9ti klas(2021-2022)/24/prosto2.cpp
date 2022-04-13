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
int Y;
int max;
cout<<"Vuvedi Y\n";
cin>>Y;
while(1==1){
cin>>chislo;
if(chislo==0) break;
if(prosto(chislo)==1 and chislo<Y) max=chislo;
}
if(!max) cout<<"ne sa vuvedi prosti chisla, koito sa po-malki ot "<<Y<<".";
else 
cout<<"Nai-golqmoto prosto ot vuvedenite, koeto e po-malko ot "<<Y<<" e "<<max;
}
