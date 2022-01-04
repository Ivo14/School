#include <iostream>
#include <math.h>
using namespace std;
int main () {
double x,y;
cout<<"Vuvedi x\n";
cin>>x;
if (x>=1)
cout<<"y="<<log(x)+1.82;
else
cout<<"y="<<x*x+7*x+8.85;
return 0;
}