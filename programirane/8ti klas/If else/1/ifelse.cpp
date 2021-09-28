#include <iostream>
#include <math.h>
using namespace std;
int main () {
double A,B,C,x1,x2,D;
cout<<"Vuvedi A, B i C\n";
cin>>A;
cin>>B;
cin>>C;
D=B*B-4*A*C;
x1=(-B+sqrt(D))/(2*A);
x2=(-B-sqrt(D))/(2*A);
{
    if (D<0)
    cout<<"Nqma realni koreni/n";
     else
    cout<<"Korenite sa"<<x1<<" i "<<x2;
 }
return 0;
}

