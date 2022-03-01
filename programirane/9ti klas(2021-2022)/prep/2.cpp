#include <iostream>
using namespace std;
int main () {
int a[5];
int l=0;
int r=4;
int m;
int x;
cin>>x;
for (int i=0;i<5;i++)
{
    cin>>a[i];
}
for (int i=0;i<5;i++)
{
    cout<<a[i];
}
while(l<=r)
{
m=(l+r)/2;
if (a[m]==x)
    {cout<<"yes";}
else {
    cout<<"no";cout<<m;}
if(x<a[m]) r=m-1;
else l=m+1;
}

    return 0;
}