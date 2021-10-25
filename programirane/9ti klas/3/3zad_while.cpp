#include <iostream>
using namespace std;
int main () {
int a,b,i;
cin>>a;
cin>>b;
i=b;
while (a<i+1 and i<b+1) {
 cout<<i<<"\n";
 i=i-1;
}
return 0;
}
