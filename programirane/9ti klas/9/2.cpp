#include <iostream>
using namespace std;
int main () {
int a,br,Br;
cout<<"vuvedi B"<<"\n";
cin>>a;
int b[a];
for(int i=0;i<a;i++)
{cin>>b[i];}
if(a%2==0) br=1;
else br=0;
for(int i=0;i<a;i++)
if(b[i]%2==0) br=br+1;
cout<<"broqt e: "<<br<<"\n";
for(int i=1;i<=a;i++)
{if(b[i]>b[i+1]) Br=Br+1;}
if(Br=a-1 and a<b[0]) cout<<"yes"<<"\n";
else cout<<"no"<<"\n";
cout<<a;
for(int i=0;i<a;i++)
cout<<", "<<b[i];
    return 0;
}