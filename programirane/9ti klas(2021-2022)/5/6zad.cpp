#include <iostream>
using namespace std;
int main()
{
    int a,a1,a2;
 a1=1; a=0;
cout<<a;
cout<<a1;
    for(int i=0;i<15;i++){
a2=a1+a;
a=a1;
a1=a2;
cout<<a2<<"\n";
    }
return 0;
}