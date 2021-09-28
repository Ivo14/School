#include <iostream>
#include <math.h>
using namespace std;
int main () {
    int a,b,c,a1,a2;
char n;
cout<<"Vuvedi chislata i operaciqta\n";
cin>>a;
cin>>b;
cin>>c;
cin>>n;
    if(a >= b && a >= c)
        a1=a;
    else if(b >= a && b >= c)
        a1=b;
   else if(c >= a && c >= b)
        a1=c;
          
      if(a <= b && a <= c)
        a2=a;
    else if(b <= a && b <= c)
        a2=b;
   else if(c <= a && c <= b)
        a2=c;
switch (n)
{
case '1': cout<<a2; break;
case '2': cout<<(a+b+c)/3; break;
case '3': cout<<a1; break;
case '4': cout<<sqrt(a*a+b*b+c*c); break;
default: cout<<"error";
}
return 0;
}

