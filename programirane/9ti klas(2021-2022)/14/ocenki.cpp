#include <iostream>
using namespace std;
int main () {
double sreden1, sreden2,max,min;
int n;
int br=0;
int br1=0;
cout<<"Vuvedi broqt na uchenici\n";
cin>>n;
    if(n>30) cout<<"trqbwa da sa po-malko ot 30";
    if(n<1) cout<<"trqbwa da sa poveche";
    else if (n>1 and n<31){
int a[n];
cout<<"Vuvedi ocenkite\n";
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
 if(i%2==0) br=br+1;
 if(i%2!=0) br1=br1+1;
}
for(int i=0;i<n;i++)
{
    if(i%2==0) sreden1=sreden1+a[i];
    else sreden2=sreden2+a[i];
}
cout<<"Sreden uspeh na purva grupa: "<<sreden1/br<<"\n";
cout<<"Sreden uspeh na vtora grupa: "<<sreden2/br1<<"\n";
max=a[0];
min=a[0];
for(int i=1;i<n;i++)
{
    if(max<a[i]) max=a[i];
    if(min>a[i]) min=a[i];
}
cout<<"Nai-visokata ocenka: "<<max<<"\n";
cout<<"Nai-niskata ocenka: "<<min<<"\n";}
return 0;
}

