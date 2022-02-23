#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int SS;
    int S=0;
    int S2=0;
    int m;
    cout<<"Vuvedi N\n";
    cin>>m;
    const int N=m;
int a[N][N];
cout<<"Vuvedi stoinostite na masiva\n";
for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
    cin>>a[i][j];

for(int i=0;i<N;i++)
   {
       for(int j=0;j<N;j++)
    cout<<a[i][j]<<setw(5);
    cout<<"\n";
   }

for (int i=0;i<N;i++)
    S=S+a[i][i];

for (int i=0,j=N-1;i<N;i++,j--)
S2=S2+a[i][j];

for(int i=0;i<N;i++)
{
    SS=0;
for(int j=0;j<N;j++)
    SS=SS+a[i][j];
cout<<"\nSbor na red "<<i<<": "<<SS; 
}

for(int j=0;j<N;j++)
{
    SS=0;
for(int i=0;i<N;i++)
    SS=SS+a[i][j];
cout<<"\nSbor na kolona "<<j<<": "<<SS; 
}

cout<<"\nSumata na stoinostite na elementite ot glavniq diagonal: "<<S<<"\n";
cout<<"\nSumata na stoinostite na elementite ot vtorichniq diagonal: "<<S2<<"\n";
return 0;
}
