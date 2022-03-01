#include <iostream>
using namespace std;
int main () {
int a[10];
int min; 
int r;
for (int i=0;i<10;i++)
{
    cin>>a[i];
}

for (int i=0;i<10;i++)
{
min=a[i];
int k=i;
for(int j=i+1;j<10;j++)
if(min>a[j])
{
    min=a[j];k=j;
}
r=a[i];
a[i]=a[k];
a[k]=r;
}
for (int i=0;i<10;i++)
{
    cout<<a[i];
}

    return 0;
}