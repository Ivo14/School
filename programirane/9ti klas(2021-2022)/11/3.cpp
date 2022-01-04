#include <iostream>
using namespace std;
int main () {
int n;
double sr;
sr=0;
cout<<"broi uchenici\n";
cin>>n;
double a[30],high;
cout<<"Vuvedi rusta na uchenicite \n";
for(int i=0;i<n;i++){
    cout<<"Uchenik"<<i+1<<":"; cin>>a[i];}
    high=a[0];
for (int k=1;k<n;k++){
 if(a[k]>high) high=a[k];}
cout<<"Nai-visok:"<<high<<"\n";
for (int k=0;k<n;k++){
        sr=(sr+a[k]);
}
cout<<"Sreden rust:"<<sr/n;
}
