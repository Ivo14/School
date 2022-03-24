#include <iostream>
using namespace std;
double max(double x, double y)
{
if(x>y) return x;
else return y;
}
int main () {
double a;
double b;
do{
cin>>a;
cin>>b;
if(a==b) break;
double m=max(a,b);
cout<<"Po-golqmoto chislo e "<<m<<"\n";} while(a!=b);
return 0;
}