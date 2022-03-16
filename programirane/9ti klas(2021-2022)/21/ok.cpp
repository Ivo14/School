#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int x;
    int Pro=1;
    int Broii=0;
    int y;
    int Proizv=1;
    int Broi=0;
    int m;
    int DailiNe=0;
    int A;
    int A2;
    int B;
    int Sr=0;
    int S=0;
    int P=1;
    cout<<"Vuvedi n\n";
    cin>>m;
    int const n=m;
int a[n][n];
cout<<"Vuvedi elementite na masiva\n";
for (int i=0;i<n;i++)
    for(int j=0;j<n;j++)
{
    cin>>a[i][j];
}
for (int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    cout<<a[i][j]<<setw(5);
cout<<"\n";}
for(int i=0;i<n;i++)
{
    if(a[n-i-1][i]%5==0) S=S+a[n-i-1][i];
}
cout<<"\nSumata na chislata ot vtorichniq diagonal, koito sa kratni na 5 e "<<S;
for (int i=1;i<n;i++)
    for (int j=n-i;j<n;j++)
{
    P=P*a[i][j];
}
cout<<"\nProizvedenieto na chislata pod vrotichniq diagonal e "<<P;
for(int i=0;i<n;i++)
{
    Sr=Sr+a[n-i-1][i];
}
cout<<"\nSredno aritmetichnoto na chislata ot vtorichniq diagonal e "<<double(Sr)/double(n);
for(int i=0;i<=n-2;i++)
    for(int j=0;j<=n-i-2;j++)
{
    if(a[i][j]%2==0&&a[i][j]!=0) Proizv=Proizv*a[i][j];
}
cout<<"\nProizvedenieto na chislata nad vtorichniq diagonal e "<<Proizv;
cout<<"\nVuvedi A\n";
cin>>A;
cout<<"\nVuvedi B\n";
cin>>B;

for(int i=0;i<n;i++)
{
    if(a[n-i-1][i]>=A&&a[n-i-1][i]<=B){DailiNe=1;Broi=Broi+1;}
}
if(DailiNe==1) {cout<<"\nDa, ima pone edin element ot vtorichniq diagonal v intervala ["<<A<<";"<<B<<"]";}
for(int i=0;i<n;i++)
{
    if(a[n-i-1][i]>=A&&a[n-i-1][i]<=B){cout<<"\nPoziciq:["<<n-i-1<<"]["<<i<<"]";}
}
cout<<"\nVuvedi x\n";
cin>>x;
int max=a[x][0];
for(int i=1;i<n;i++)
{
    if(a[x][i]>max) max=a[x][i];
}
cout<<"\nMaksimalniqt element ot red "<<x<<" e "<<max;
cout<<"\nVuvedi y\n";
cin>>y;
for(int i=0;i<n;i++)
{
    Pro=Pro*a[i][y];
}
cout<<"\nProizvedenieto na chislata ot kolona "<<y<<" e "<<Pro;

cout<<"\nVuvedi A2\n";
cin>>A2;
for(int i=0;i<n;i++)
{
    if(a[n-i-1][i]>A2); Broii=Broii+1;
}
cout<<"\nBroqt na chislata ot vtorichniq diagonal, koito sa po-golemi ot "<<A2<<" e "<<Broii;
return 0;
}






