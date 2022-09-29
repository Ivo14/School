#include <iostream>
using namespace std;
int main () {
    int n;
 int N[10][10];
 int SUM=0;
 int SUM1=0;
 int SUM2=0;
 int SUMM=0;

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
SUMM=SUMM+N[i][0];}

for(int i=0;i<n;i++){
    for(int h=0;h<n;h++) {SUM1=N[i][h]+SUM1;}
    if(SUM1!=SUMM) {cout<<"NO"; break;} SUM1=0;
}

for(int i=0;i<n;i++){
    for(int h=0;h<n;h++) if(i==h) SUM=SUM+N[i][h];
}
for(int i=0;i<n;i++){
    for(int h=0;h<n;h++) if(h==n-i-1) SUM2=SUM2+N[i][h];
}
if(SUM==SUM2 and SUM2==SUMM) cout<<"YES";
return 0;
}
