#include <iostream>
using namespace std;
int main () {
int x,y,a,a1,b,b1,c,c1;
cout<<"Vuvedi dwe tricifreni chisla\n";
cin>>x;
cin>>y;
a=x/100;
a1=y%10;
b=x/10-(x/100)*10;
b1=y/10-(y/100)*10;
c=x%10;
c1=y/100;

if (a==a1 and b==b1)
    cout<<"mirror number";
else
    cout<<"not mirror";
return 0;
}
