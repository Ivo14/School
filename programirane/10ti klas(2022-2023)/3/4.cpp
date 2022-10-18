#include <iostream>
#include<math.h>
using namespace std;
void lin(int a,int b){
if (a==0 and b==0) cout << "Vsqko x e reshenie";
else if (a==0 and b!=0) cout<< "NRK";
else cout<<-b/a;
}
void kvadr(int a,int b,int c) {
if(a==0) cout<<1;
else if ((b*b-4*a*c)<0) cout<<"NRK";
else if ((b*b-4*a*c)==0)cout<<"Dvoen koren "<<-b/(2*a);
else cout<<"koren 1: "<<(-b+b*b-4*a*c)/(2*a)<<"\n koren 2: "<<(-b+b*b-4*a*c)/(2*a);
}
int main () {
    int a,b,c;
    cin>>a>>b>>c;
    kvadr(a,b,c);
return 0;
}
