#include <iostream>
using namespace std;
int main () {
    int n,f;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
       for(int i=0;i<n;i++){
        if(a[i]>a[i+1]) {break;f=1;}
        else f=0;
    }
    if(f==0) cout<<"ascending";
    else cout<<"not ascending";

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
cout<<"\nVuzhodqsht red: ";
for(int i=0;i<n;i++){
cout<<a[i]<<" ";}
cout<<"\n";
int max,h; 
for(int i=0;i<n;i++) 
{  max=a[i]; 
    int k=i; 
for(int j=i+1;j<n;j++) 
if(max<a[j]) 
{   min=a[j]; 
   	 k=j; 
} 
h=a[i]; 
a[i]=a[k]; 
a[k]=h;
for(int g=0;g<n;g++)
{
    cout<<a[g]<<" ";
}
cout<<"\n";
} 
cout<<"\nNizhodqsht red: ";
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
return 0;
}