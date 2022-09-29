#include <iostream>
using namespace std;
int main () {
    int n;
 int N[10][10];
 int SUM=0;
 int SUM1=0;
 int SUM2=0;

cout<<"Vuvedi N\n";
cin>>n;
for(int i=0;i<n;i++){
    for (int h=0;h<n;h++) cin>>N[i][h];
}
for(int i=0;i<n;i++){
    for(int h=0;h<n;h++)cout<<N[i][h]<<"  ";
    cout<<"\n";
}
for(int i=0;i<n;i++){
    for(int h=0;h<n;h++) {SUM1=N[i][h]+SUM1;}
    cout<<i<<" - "<<SUM1<<"\n"; SUM1=0;
}
for(int i=0;i<n;i++){
    for(int h=0;h<n;h++) {SUM1=N[h][i]+SUM1;}
    cout<<i<<" - "<<SUM1<<"\n"; SUM1=0;
}
for(int i=0;i<n;i++){
    for(int h=0;h<n;h++) if(i==h) SUM=SUM+N[i][h];
}
for(int i=0;i<n;i++){
    for(int h=0;h<n;h++) if(h==n-i-1) SUM2=SUM2+N[i][h];
}
cout<<"Sborut ot stoinostite na glavniq diagonal e "<<SUM<<"\n";
cout<<"Sborut ot stoinostite na vtorichniq diagonal e "<<SUM2<<"\n";
return 0;
}
