#include <iostream>
#include <math.h>
using namespace std;
int main () {
int a,b,c;
double S,p;
do {
cin>>a;
cin>>b;
cin>>c;
p=(a+b+c)/2; S=sqrt(p*(p-a)*(p-b)*(p-c));
if (a>b+c or b>c+a or c>a+b or a<=0 or b<=0 or c<=0) cout<<"iziskvam novo vuvejdane\n";
else cout<<"Liceto e "<<S<<"\nObikolkata e "<<a+b+c;
} while (a>b+c or b>c+a or c>a+b);
}