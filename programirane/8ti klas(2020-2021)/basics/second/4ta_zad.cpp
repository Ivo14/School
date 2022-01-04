#include <iostream>
#include <math.h>
using namespace std;
int main () {
double a,b,c;
cout<<"Vuvedi golqma osnova\n";
cin>>a;
cout<<"Vuvedi malka osnova\n";
cin>>b;
cout<<"Vuvedi bedroto na ravnobedreniq trapec\n";
cin>>c;
cout<<"\nObikolkata e "<<a+b+c+c;
cout<<"\nsrednata osnova e "<<(a+b)/2;
cout<<"\nVisochinata e "<<sqrt(pow(c,2)-pow((a-b)/2,2));
cout<<"\nLiceto e "<<(a+b)/2*sqrt(pow(c,2)-pow((a-b)/2,2));
return 0;
}
