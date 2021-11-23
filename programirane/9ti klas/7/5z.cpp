#include <iostream>
#include <math.h>
using namespace std;
int main () {
double a;
double br=0;
double S=0; 
do {
cin>>a;
if(a>=2 and a<=6){ 
S=S+a;
br=br+1;}
}while (a>=2 and a<=6);
if (S/br>=5.50) cout<<"DA";
else cout<<"NE";
}