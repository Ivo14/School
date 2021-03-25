#include <iostream>
#include <math.h>
using namespace std;
int main () {
double a,b,c,p,d;
cout<<"Vuvedi stranite na triugulnika\n";
cin>>a;
cin>>b;
cin>>c;
p=(a+b+c)/2;
d=p*(p-a)*(p-b)*(p-c);
cout<<"liceto e "<<sqrt(d);
return 0;
}


