#include <iostream>
using namespace std;
int main () {
    int S=0;
    int x;
    int m;
    cout<<"Vuvedi N\n";
    cin>>m;
    const int N=m;
int a[N][N];
for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
    cin>>a[i][j];
cout<<"Vuvedi x\n";
cin>>x;
for(int i=0;i<N;i++)
    S=S+a[x][i];
    cout<<"Sumata ot stoinostite na elementite ot red "<<x<<" e "<<S;
return 0;
}
