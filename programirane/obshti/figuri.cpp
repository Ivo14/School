#include <iostream>
#include <math.h>
using namespace std;
int main () {
    int a,b,c;
 
char n;
cout<<"Vuvedi operaciqta\n";
cin>>n;
switch (n)
{
case 'P': 
cout<<"Vuvedi stranite na pravougulnika\n";cin>>a>>b;cout<<"Obikolka:"<<(a+b)*2<<"\nLice:"<<a*b; break;
case 'T': 
cout<<"Vuvedi stranite na triugulnika\n";cin>>a>>b>>c;cout<<"Poluperimetur:"<<(a+b+c)/2<<"\nLice:"<<sqrt((a+b+c)/2*((a+b+c)/2-a)*((a+b+c)/2-b)*((a+b+c)/2-c)); break;
case 'R': 
cout<<"Vuvedi osnovite na trapec i visochinata\n";cin>>a>>b>>c;cout<<"Lice:"<<(a+b)/2*c; break;
case 'C': 
cout<<"Vuvedi diametura na okrujnost\n";cin>>a;cout<<"Duljinata na okrujnostta e"<<a*3.14<<"\nLice:"<<a*a*3.14/4;break;
default: cout<<"Error";
}
}