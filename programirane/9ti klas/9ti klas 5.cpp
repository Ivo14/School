#include <iostream>
using namespace std;
int main () {
char something;
cin>>something;
int a,b;
switch(something)
{
case 'P': cout<<"Vuvedi osnovata i visochinata na usporednik\n";cin>>a;cin>>b;cout<<"Liceto e "<<a*b;break;
case 'T': cout<<"Vuvedi osnovata i visochinata na triugulnik\n";cin>>a;cin>>b;cout<<"Liceto e "<<a*b/2;break;
case 'C':cout<<"Vuvedi radius na okrujnost\n";cin>>a;cout<<"Liceto e "<<a*a*3.14;break;
default: cout<<"Error, vuvedi P, T ili C";
}
return 0;
}
