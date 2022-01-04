#include <iostream>
using namespace std;
int main () {
int a,d;
cin>>a;
d=1;
while (d>0 and d<a+1) {
        if (a%d==0)
 cout<<d<<"\n";
d=d+1;
}
return 0;
}

