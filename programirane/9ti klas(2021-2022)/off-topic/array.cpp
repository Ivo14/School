#include <iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<n;i++) cout<<a[i];
cout<<"\n";
int x;
cin>>x;
for(int i=0;i<n;i++) 
    for(int j=n;j>i;j--)
    {
     if(a[i]+a[j]==x) cout<<a[i]<<" and "<<a[j]<<" add up to "<<x<<"\n";
    }

return 0;
}