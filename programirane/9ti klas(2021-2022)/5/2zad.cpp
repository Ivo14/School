#include <iostream>
using namespace std;
int main()
{int N,i,br;
cin>>N;
br=0;
for (i=1;i<N;i++) {
if (N%i==0 and i!=1) {
br=br+1;
}}
if (br>0) cout<<"ne e prosto";
else cout<<"prosto";
return 0;
}