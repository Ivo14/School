#include<iostream>
using namespace std;
int main () {
int a,b,c;
for (a=1;a<5;a++)
for (b=0;b<5;b++)
for (c=0;c<5;c++)
if (a+c==b)cout<<a<<b<<c<<"\n";
    return 0;
}