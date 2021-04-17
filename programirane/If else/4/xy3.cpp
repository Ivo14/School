#include <iostream>
using namespace std;
int main () {
double x;
cout<<"Vuvedi x\n";
cin>>x;
if (x<=0)
cout<<"y="<<x+2<<"\n";
else if (x>0 and x<=1)
    cout<<"y="<<x*x+2<<"\n";
else if (x>1)
cout<<"y="<<3*x<<"\n";
return 0;
}
