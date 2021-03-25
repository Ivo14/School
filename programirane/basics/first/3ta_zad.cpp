#include <iostream>
using namespace std;
int main () {
int a;
cout<<"Vuvudi tricifreno chislo\n";
cin>>a;
cout<<"Cifrata na stoticite e "<<a/100;
cout<<"\nCifrata na desetici e "<<a/10-(a/100)*10;
cout<<"\nCifrata na edinicite e "<<a%100-(a/10-(a/100)*10)*10;
cout<<"\nPredstavqne kato sbor: "<<a<<"="<<a/100<<"*100+"<<a/10-(a/100)*10<<"*10+"<<a%100-(a/10-(a/100)*10)*10;
return 0;
}
