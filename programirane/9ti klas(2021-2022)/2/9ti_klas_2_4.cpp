#include <iostream>
using namespace std;
int main () {
int a;
cout<<"Vuvedi godinata\n";
cin>>a;
if (a%400==0)
cout<<"Godinata e visokosna";
else if (a%4==0 && a%100!=0) cout<<"Godinata e visokosna";
else cout<<"Godinata ne e visokosna";
    return 0;
}