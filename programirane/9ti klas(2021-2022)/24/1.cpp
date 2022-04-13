#include <iostream>
#include <math.h>
using namespace std;
double func(double x){
if(x>10) return x*x-1;
if(x>=5 and x<=10) return sqrt(x*x+2);
else return -1;
}

int main () {

int a,b,c;
cout<<"Vuvedi a, b i c\n";
cin>>a;
cin>>b;
cin>>c;
double result=func(a)+func(b)+func(c);
cout<<"\n"<<result;
return 0;
}


