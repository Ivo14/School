#include <iostream>
using namespace std;
int main () {
int N, k,i,kg,c;
kg=0;
c=0;
cin>>N;
for (i=0;i<N;i++){
cin>>k;
c=c+k;
kg=kg+(k*5);
}
cout<<"Kilograma nabrani:"<<kg<<"\n";
cout<<"Obsto caseti:"<<c;
return 0;
}

