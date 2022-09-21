#include <iostream>
using namespace std;
int main () {
int C[20];
int r; int broi=0;int br=0; int br750=0; int br1200=0;
cout<<"Vuvedi broi rabotnici ";
cin>>r;
for(int i=0;i<r;i++){
    cin>>C[i];
}
for(int i=0;i<r;i++){
    broi=broi+C[i];
}
cout<<"Sredna zaplata: "<<broi/r<<" ";
cout<<"\nZaplati mejdu 850 i 1200: ";
for(int i=0;i<r;i++){
    if(C[i]>broi/r) br=br+1;
    if(C[i]<750) br750=br750+1;
    if(C[i]>=850 and C[i]<=1200) cout<<C[i]<<" ";
}
cout<<"\nBroi nad sredna: "<<br;
cout<<"\nBroi pod 750: "<<br750;

}

