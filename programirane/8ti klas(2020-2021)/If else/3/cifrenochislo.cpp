#include <iostream>
using namespace std;
int main () {
double a;
cout<<"Vuvedi chisloto\n";
cin>>a;
if (a>-10 and a<10)
cout<<"ednocifreno";
else if (a>=10 and a<100)
cout<<"dvucifreno";
else if (a>=100 and a<1000)
cout<<"tricifreno";

if (a<=-10 and a>-100)
cout<<"dvucifreno";
else if (a<=-100 and a>-1000)
cout<<"tricifreno";
else 
cout<<"golqmo";


return 0;
}