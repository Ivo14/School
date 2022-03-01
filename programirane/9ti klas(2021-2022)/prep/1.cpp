#include <iostream>
using namespace std;
int main () {
int a[10];
int t;
for (int i=0;i<10;i++)
{
    cin>>a[i];
}
for (int i=0;i<10;i++)
{
    cout<<a[i]<<" ";
}

for (int i=0;i<10;i++)
    for (int j=9;j>i;j--)
if(a[j-1]>a[j])
{
t=a[j-1];
a[j-1]=a[j];
a[j]=t;
}

cout<<"\n";
for (int i=0;i<10;i++)
{
    cout<<a[i]<<" ";
}

    return 0;
}