#include <iostream>
#include <math.h>
using namespace std;
int main () {
double a,pi,r;
pi=(double)355/113;
cout<<"Vuvedete goleminata na ugula\n";
cin>>a;
r=(a*pi)/180;
cout<<"\nSin="<<sin(r);
cout<<"\nCos="<<cos(r);
cout<<"\nTg="<<tan(r);
return 0;
}

