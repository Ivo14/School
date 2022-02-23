#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int nomer1;
    int nomer2;
    int max;
    int m;
    cout<<"Vuvedi N\n";
cin>>m;
const int N=m;
int a[N][N];
for(int i=0;i<N;i++)
    for(int j=0;j<N;j++){
    cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
for(int i=0;i<N;i++)
   {
       for(int j=0;j<N;j++)
    cout<<a[i][j]<<setw(5);
    cout<<"\n";
   }
   max=a[0][0];
for(int i=0;i<N;i++)
    {for(int j=0;j<N;j++)
        if(max<a[i][j]) {max=a[i][j];nomer1=i;nomer2=j; }
    }
    cout<<"Nai-golqmata stoinost v masiva e "<<max<<", a tazi stoinost se namira v a["<<nomer1<<"]["<<nomer2<<"]\n";
    cout<<"Stoinostite na elementite ot glavniq diagonal:\n";
    for (int i=0;i<N;i++)
        cout<<a[i][i]<<setw(3);
return 0;
}
