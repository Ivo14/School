#include <iostream>
using namespace std;
int main () {
double a,b,c,d;
cout<<"Vuvedi razmerite na knigata\n";
cin>>a;
cin>>b;
cin>>c;


cout<<"Vuvedi diametura\n";
cin>>d;
if(a*b<d) cout<<"da";
else if(a*c<d) cout<<"da";

else if(b*c<d) cout<<"da";
else cout<<"ne";

return 0;
}
