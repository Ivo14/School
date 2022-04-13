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
int S=0;
while(1==1){
        cin>>chislo;
if(chislo==0) break;
cout<<prosto(chislo)<<"\n";
if(prosto(chislo)==0) S=S+chislo;
}
cout<<"Sborut na chislata, koito ne sa prosti e "<<S;
}

