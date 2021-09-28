#include <iostream>
#include <math.h>
using namespace std;
int main () {
double a,b,c,d,x,y;
cout<<"Vuvedi x\n";
cin>>x;
cout<<"Vuvedi y\n";
cin>>y;
a=pow(x,1.5);
b=1-2*y;
c=pow(x,2)+2+pow(y,4);
cout<<"Stoinostta na x^1,5+(1-2y)/(x^2+2+y^4)="<<a+b/c;
return 0;
}
