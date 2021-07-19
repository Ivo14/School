#include <iostream>
using namespace std;
int main () {
int a,b,c;
cout<<"Vuvedi stranite na triugulnika\n";
cin>>a;
cin>>b;
cin>>c;
if (a>b+c or b>a+c or c>b+a)
cout<<"0";
else if (a==b && b==c)
cout<<"ravnostranen";
else if (a==b && b!=c)
cout<<"ravnobedren";
else if (a==c && c!=b)
cout<<"ravnobedren";
else if (b==c && c!=a)
cout<<"ranvobedren";
else cout<<"ranvostranen"; 
    return 0;
}