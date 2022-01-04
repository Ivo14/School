#include <iostream>
using namespace std;
int main () {
int n,t;
int sbor=0;
int proizvedenie=1;
cout<<"Vuvedi broqt chisla N(1<=N<=150)\n";
cin>>n;
if(n<1) cout<<"N trqbwa da e poveche ot 1";
if(n>150) cout<<"N trqbwa da e po-malko ot 150";
else if(n>1 and n<151){
int a[n];
cout<<"Vuvedi chislata\n";
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    sbor=sbor+a[i];
}
for(int i=0;i<n;i++)
{
    proizvedenie=proizvedenie*a[i];
}

cout<<"Sbor: "<<sbor<<"\n";
cout<<"Proizvedenie: "<<proizvedenie<<"\n";
cout<<"Obraten red: ";
for(int i=n-1;i>=0;i--)
{
cout<<a[i]<<" ";
}

}
return 0;
}

