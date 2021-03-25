#include <iostream>
using namespace std;
int main () {
double A,B,C,S;
int O;
cout<<"Vuvedi suotvetno duljina, shirochina i visochina\n";
cin>>A;
cin>>B;
cin>>C;
S=2*A*C+2*B*C+A*B;
O=S/6;
cout<<"Kutiite nujni sa "<<O<<" i ostavat "<<S-O*6;
return 0;
}
