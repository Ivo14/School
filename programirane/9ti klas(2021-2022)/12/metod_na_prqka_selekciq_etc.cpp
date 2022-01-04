#include <iostream>
using namespace std;
int main () {
    int a[15];
    cout<<"Vuvedi 15te elementa na masiva\n";
    for(int i=0; i<15;i++)
    cin>>a[i];
int min,r,nai_malko_chetno,nai_golqmo_nechetno,sr;
sr=0;
nai_malko_chetno=1;
nai_golqmo_nechetno=0;
for(int i=0;i<15;i++)
{  min=a[i];
    int k=i;
for(int j=i+1;j<15;j++)
if(min>a[j])
{   min=a[j];
   	 k=j;
}
r=a[i];
a[i]=a[k];
a[k]=r;
}
cout<<"Vuzhodqsht red: ";
for(int i=0;i<15;i++)
{cout<<a[i]<<" ";}
for(int i=0;i<15;i++) {
    if(a[i]%2==0) {nai_malko_chetno=a[i];cout<<"\nNai-malkoto chetno e: "<<nai_malko_chetno; break;}
}
if(nai_malko_chetno==1) cout<<"\nnqma chetni";
for(int i=15;i>0;i--) {
if(a[i]%2!=0) {nai_golqmo_nechetno=a[i];cout<<"\nNai-golqmoto nechetno e: "<<nai_golqmo_nechetno; break;}
}
if(nai_golqmo_nechetno==0) cout<<"nqma nechetni\n";
cout<<"\nSumata na pette nai-malki: "<<a[0]+a[1]+a[2]+a[3]+a[4];
cout<<"\nProizvedenieto na pette nai-golemi: "<<a[14]*a[13]*a[12]*a[11]*a[10];
cout<<"\nSredno aritmetichno: ";
for(int i=0; i<15;i++){
sr=sr+a[i];}
cout<<sr/15;
}
