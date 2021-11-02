#include <iostream>
using namespace std;
int main () {
int M,N,B;
cin>>M;
cin>>N;
if (M>N) { B=N;}
else {B=M;}
for (int i=1;i<=B;i++){
if (M%i==0 and N%i==0)
cout<<i<<"\n";
}
return 0;
}