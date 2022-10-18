#include <iostream>
#include<math.h>
using namespace std;
double func(int x) {
if (x>10) return x*x-1;
else if (x>=5 and x<=10) return sqrt(x*x+2);
else return -1;
}
int main () {
    int a,b,c;
cout<<"Vuvedi 3 realni chisla";
cin>>a>>b>>c;
cout<<"f(a)+f(b)+f(c)="<<func(a)+func(b)+func(c);
return 0;
}
