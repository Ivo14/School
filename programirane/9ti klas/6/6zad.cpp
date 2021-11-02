#include <iostream>
using namespace std;
int main () {
double b,A,B;
int a=1;
cout<<"Vuvedi A i B\n";
cin>>A;
cin>>B;
cout<<"Vuvedi 10 chisla";

while(a<11){
    cin>>b;
if (A<b and b<B) {cout<<"v intervala e\n";}
else {cout<<"ne e v intervala\n";}
a=a+1;
}

    return 0;
}