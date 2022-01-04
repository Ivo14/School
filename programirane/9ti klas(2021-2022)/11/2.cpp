#include <iostream>
using namespace std;
int main () {
int n;
cout<<"broi elementi\n";
cin>>n;
double a[n],min;
cout<<"Vuvedi stoinostite\n";
for(int i=0;i<n;i++){
    cout<<"a["<<i<<"]="; cin>>a[i];}
    min=a[0];
for (int k=1;k<n;k++){
 if(a[k]<min) min=a[k];}
cout<<"Min="<<min;
}
