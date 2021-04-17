#include <iostream>
using namespace std;
int main () {
double x;
cout<<"Vuvedi x\n";
cin>>x;
if (x<=1)
cout<<"y="<<x*x;
else if (x>1 and x<=2)
cout<<"y="<<x+1;
else if (x>=2 and x<=3)
cout<<"y="<<3*x-3;
else if (x>3)
cout<<"y="<<2*x;
return 0;
}