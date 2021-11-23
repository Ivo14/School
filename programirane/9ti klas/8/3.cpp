#include<iostream>
using namespace std;
int main () {
int a,b,c;
for (a=1;a<10;a++)
for (b=0;b<10;b++)
for (c=0;c<10;c++)
if (a!=b and b!=c and c!=a)cout<<a<<b<<c<<"\n";
    return 0;
}