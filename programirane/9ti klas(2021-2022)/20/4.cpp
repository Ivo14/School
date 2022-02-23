#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int SS;
    int test=0;
    int DaliEMagicheski=1;
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

for(int i=0;i<N;i++)
{
    test=test+a[i][0];
}



for(int i=0;i<N;i++)
{
    SS=0;
for(int j=0;j<N;j++)
    SS=SS+a[i][j];
if(SS!=test) DaliEMagicheski=0; break;
}

for(int j=0;j<N;j++)
{
    SS=0;
for(int i=0;i<N;i++)
    SS=SS+a[i][j];
if(SS!=test) DaliEMagicheski=0;break;
}

if(DaliEMagicheski==1) cout<<"YES";
else cout<<"NO";
return 0;
}
