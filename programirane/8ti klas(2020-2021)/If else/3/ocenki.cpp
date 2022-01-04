#include <iostream>
using namespace std;
int main () {
double a;
cout<<"Vuvedi ocenkata\n";
cin>>a;
if (a>=2 and a<3)
cout<<"Slab";
else if (a>=3 and a<3.50)
cout<<"sreden";
else if (a>=3.50 and a<4.50)
cout<<"dobur";
else if (a>=4.50 and a<5.50)
cout<<"mnogo dobur";
else if (a>=5.50 and a<=6)
cout<<"otlichen";
else 
cout<<"greshka";


return 0;
}