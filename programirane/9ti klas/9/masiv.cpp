#include <iostream>
using namespace std;
int main () {
int n;
cin>>n;
int a[31];
for (int i=1;i<=n;i++)
{
cout<<i<<"-";
cin>>a[i];
}
int b=0;
for (int i=1;i<=n;i++)
if (a[i]<0) b=b+1;
cout<<"broi otricatelni: "<<b<<"\n";
int br=0;
double ave;
for(int i=1;i<=n;i++)
{
    br=br+a[i];
    ave=br/n;
}
cout<<"Sredna temperatura: "<<ave<<"\n";
int otc;
for (int i=1;i<=n;i=i+1)
if (a[i]!=ave)
{otc=ave-a[i];
cout<<"Otclonenie za den "<<i<<": "<<otc<<"\n";}
cout<<"Dni s polojitelni temperaturi"<<"\n";
for (int e=1;e<=n;e=e+1)
if(a[e]>0) cout<<e<<"\n";
    return 0;
}