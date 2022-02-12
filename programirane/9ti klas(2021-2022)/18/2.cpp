#include <iostream>
#include<stdlib.h>
using namespace std;
int main () {
    int P,P1;
int a[20];
int NaiGolqmoChetno;
int NaiMalkoNechetno;
int SumaNaShestteNaiMalki=0;
int ProizvedenieNaShestteNaiGolemi=1;
int Average=0;
int ImaLiChetno=0;
int ImaLiNeChetno=0;
for(int i=0;i<20;i++)
{
    a[i]=rand()%101;
}
for(int i=0;i<20;i++)
{
cout<<a[i]<<" ";
}
int t;
for(int i=0; i<20; i++){                   
for(int j=19; j>i; j--)
{
if(a[j-1] > a[j])
   {
t = a[j-1];
a[j-1] = a[j];
a[j] = t;
}
}
}
cout<<"\nVuzhodqsht red:";
for(int i=0; i<20; i++) {        
cout<<a[i]<<" ";}

for(int i=0;i<20;i++)
{
    if (a[i]%2==1) {ImaLiNeChetno=1;P1=a[i];break;}
}
for(int i=0;i<20;i++)
{
    if (a[i]%2==0) {ImaLiChetno=1;P=a[i];break;}
}
NaiGolqmoChetno=P;
NaiMalkoNechetno=P1;
if (ImaLiChetno==1) {
for(int i=1;i<20;i++)
{
    if (NaiGolqmoChetno<a[i] and a[i]%2==0) NaiGolqmoChetno=a[i];
}
}
else {
cout<<"Nqma Chetni Chisla";
}

if(ImaLiNeChetno==1) {
    for(int i=1;i<20;i++)
{
    if (NaiMalkoNechetno>a[i] and a[i]%2==1) NaiMalkoNechetno=a[i];
}
}
else {
    cout<<"Nqma Nechetni Chisla";
}



for(int i=0;i<6;i++)
{
    SumaNaShestteNaiMalki=SumaNaShestteNaiMalki+a[i];
}
for(int i=15;i<20;i++)
{
    ProizvedenieNaShestteNaiGolemi=ProizvedenieNaShestteNaiGolemi*a[i];
}
for(int i=0;i<20;i++)
{
    Average=Average+a[i];
}
cout<<"\nNai-Golqmoto Chetno e "<<NaiGolqmoChetno;
cout<<"\nNai-Malkoto Nechetno e "<<NaiMalkoNechetno;
cout<<"\nSumata na shestte nai-malki e "<<SumaNaShestteNaiMalki;
cout<<"\nProizvedenieto na shestte nai-golemi e "<<ProizvedenieNaShestteNaiGolemi;
cout<<"\nSredno Aritmetichnoto e "<<Average/20;
    return 0;
}
