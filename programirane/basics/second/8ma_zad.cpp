#include <iostream>
using namespace std;
int main () {
double v1,v2,v3,t1,t2,t3;
cout<<"Vuvedi skorostta suotvetno na 1voto, 2to i 3to izminato raztoqnie v km/h\n";
cin>>v1;
cin>>v2;
cin>>v3;
cout<<"\nVuvedi vremeto za koeto e izminato suotvetno 1voto, 2roto i 3to raztoqnie v chasove\n";
cin>>t1;
cin>>t2;
cin>>t3;
cout<<"\nIzminaliq put e "<<v1*t1+v2*t2+v3*t3<<"km";
return 0;
}
