#include <iostream>
using namespace std;
int main () {
int M,N,B,a;
cin>>M;
cin>>N;
if (M>N) { B=N;}
else {B=M;}
for (int i=1;i<=B;i++){
if (M%i==0 and N%i==0)
a=i;
}
cout<<a;
return 0;
}