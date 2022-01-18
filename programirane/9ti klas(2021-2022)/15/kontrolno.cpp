#include <iostream>
using namespace std;
int main () {
int a[15];
int br=0;
double sr=0;
cout<<"Vuvedete elementite na masiva\n";
for(int i=0;i<15;i++)
{
    cout<<"\na["<<i<<"]=";
    cin>>a[i];
}
for(int i=0;i<15;i++)
{
    if(a[i]>=20 and a[i]<=50) br=br+1;
}
cout<<"Broqt na chislata, koito sa v intervala [20;50] e "<<br<<"\n";
for(int i=0;i<15;i++)
{
    sr=sr+a[i];
}
cout<<"Sredno aritmetichnoto e "<<sr/15<<"\n";
cout<<"Obraten red: ";
for(int i=14;i>=0;i--)
{
    cout<<a[i]<<" ";
}

return 0;
}
