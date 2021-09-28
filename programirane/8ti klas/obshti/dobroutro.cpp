#include <iostream>
using namespace std;
int main () {
int a;
cout<<"Vuvedi chas\n";
cin>>a;
if (a>=5 and a<=9)
cout<<"dobro utro";
else if (a>=10 and a<=18)
cout<<"dobur den";
else if (a>=10 and a<=22)
cout<<"dobur vecher";
else if (a>=23 and a<25)
cout<<"leka nosht";
else if (a<5 and a>=0)
cout<<"leka nosht";
else 
cout<<"greshka";
return 0;
}