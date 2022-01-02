#include <iostream>
using namespace std;
int main () {
int a[16];
for(int i=0;i<16;i++){
cin>>a[i];}
int flag,r; 
for(int i=16;i>0;i--) 
{   flag=0; 
for(int j=0;j<i;j++) 
if(a[j]>a[j+1]) 
{ 	r=a[j]; 
a[j]=a[j+1]; 
a[j+1]=r; 
flag=1; 
} 
if(!flag) break; 
} 
cout<<"Vuzhodqsht red: ";
for(int i=0;i<16;i++){
cout<<a[i]<<" ";}
for(int i=16;i>0;i--) 
{   flag=0; 
for(int j=0;j<i;j++) 
if(a[j]<a[j+1]) 
{ 	r=a[j]; 
a[j]=a[j+1]; 
a[j+1]=r; 
flag=1; 
} 
if(!flag) break; 
} 
cout<<"\nNizhodqsht red: ";
for(int i=0;i<16;i++){
cout<<a[i]<<" ";}
return 0;
}