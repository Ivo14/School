#include <iostream>
using namespace std;
int main () {
int n=rand()%120+11;
int a[n];
for(int i=0;i<n;i++)
{
    a[i]=rand()%101;
}
cout<<"Vsichki rezultati:";
for (int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
int t;
for(int i=0; i<n; i++){                   
for(int j=n-1; j>i; j--)
{
if(a[j-1]<a[j])
   {
t = a[j-1];
a[j-1] = a[j];
a[j] = t;
}
}
}
cout<<"\nDesette nai-visoki rezultata\n";
for (int i=0;i<10;i++)
{
    cout<<a[i]<<" ";
}
return 0;
}

