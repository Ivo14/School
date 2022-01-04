#include <iostream>
using namespace std;
int main () {
int n,br;
double sr;
br=0;
sr=0;
cout<<"broi zaplati\n";
cin>>n;
double a[20];
cout<<"Vuvedi zaplatite \n";
for(int i=0;i<n;i++){
    cout<<"Zaplata"<<i+1<<":"; cin>>a[i];}

for (int k=0;k<n;k++){
        sr=(sr+a[k]);
}
cout<<"Sredna zaplata:"<<sr/n<<"\n";
for (int k=0;k<n;k++){
        if(a[k]>sr/n) br++;
}
cout<<"Broi zaplati nad srednata:"<<br<<"\n";
for (int k=0;k<n;k++){
if(a[k]<750) {cout<<"da, ima zaplati pod 750\n\n"; break;}
}
cout<<"Zaplati v intervala [850;1200]:\n";
for (int k=0;k<n;k++){
        if (a[k]>=850 and a[k]<=1200) cout<<a[k]<<"\n";
}
}
