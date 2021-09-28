#include <iostream>
using namespace std;
int main () {
int a;
cout<<"Vuvudi dwucifreno chislo\n";
cin>>a;
cout<<"Cifrata na deseticite e "<<a/10;
cout<<"\nCifrata na edinicite e "<<a%10;
cout<<"\nPredstavqne kato sbor: "<<a<<"="<<a/10<<"*"<<"10"<<"+"<<a%10;
return 0;
}
