#include <iostream>
using namespace std;
int main () {
    int n, flag, position;
    cout<<"Vuvedi broqt na chisla v masiva\n";
    cin>>n;
    int a[n];
    cout<<"Vuvedi elementite na masiva\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
int min,r;
for(int i=0;i<n;i++)
{  min=a[i];
    int k=i;
for(int j=i+1;j<n;j++)
if(min>a[j])
{   min=a[j];
   	 k=j;
}
r=a[i];
a[i]=a[k];
a[k]=r;
}
cout<<"Vuzhodqshtiqt red e\n";
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
int X;
cout<<"\nVuvedi X\n";
cin>>X;
int l=0,right=17;
int m;
	while(l<=right)
	{
		m=(l+right)/2;
		if(X==a[m]) {flag=1; position=m;}
		if(X<a[m])
			right=m-1;
		else
			l=m+1;
	}
	if(flag==1)
    {
        cout<<"DA, a posiciqta e "<<position;
    }
    else cout<<"NE";
return 0;
}
