#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int x;
    int Sr=0;
    int Broi2=0;
    int Broi3=0;
    int Broi4=0;
    int Broi5=0;
    int Broi6=0;
    int max=0;
    int number=0;
    int y;
    int Q;
    int k;
    int p;
    cout<<"Vuvedi n i m\n";
    cin>>x;
    cin>>y;
    int const n=x;
    int const m=y;
int a[n][m];
cout<<"Vuvedi ocenkite\n";
for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
{
    cin>>a[i][j];
}
for(int i=0;i<n;i++){
for(int j=0;j<m;j++)
    cout<<a[i][j]<<setw(5);
    cout<<"\n";
    }

cout<<"Vuvedi nomera na uchenika\n";
cin>>k;
cout<<"Vuvedi nomera na predmeta\n";
cin>>p;
cout<<"Ocenkata na uchenik "<<k<<" po predmet "<<p<<" e "<<a[k][p]<<"\n";
for(int i=0;i<n;i++){Sr=0;
for(int j=0;j<m;j++){
    Sr=Sr+a[i][j];
}  cout<<"Sredno aritmechnoto ot ocenkite na uchenik "<<i<<" e "<<double(Sr)/double(m)<<"\n";
}
for(int j=0;j<n;j++){Sr=0;
for(int i=0;i<m;i++){
    Sr=Sr+a[i][j];
}  cout<<"Sredno aritmechnoto ot ocenkite na predmet "<<j<<" e "<<double(Sr)/double(n)<<"\n";}

for(int i=0;i<m;i++)
{
max=max+a[0][i];
}
for(int i=0;i<n;i++){Q=0;
for(int j=0;j<m;j++)
{
Q=Q+a[i][j];
}
if(Q>max) {max=Q;number=i;}
}
cout<<"Uchenikut s nai-visok uspeh e uchenik nomer "<<number<<" i e s uspeh "<<double(max)/double(m)<<"\n";

for(int i=0;i<n;i++){
for(int j=0;j<m;j++)
{
if(a[i][j]==2) Broi2++;
if(a[i][j]==3) Broi3++;
if(a[i][j]==4) Broi4++;
if(a[i][j]==5) Broi5++;
if(a[i][j]==6) Broi6++;
}}
cout<<"Broi na dvoikite: "<<Broi2<<"\n";
cout<<"Broi na troikite: "<<Broi3<<"\n";
cout<<"Broi na chetvorkite: "<<Broi4<<"\n";
cout<<"Broi na peticite: "<<Broi5<<"\n";
cout<<"Broi na sechticite: "<<Broi6<<"\n";

    return 0;
}