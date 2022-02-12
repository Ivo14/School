#include <iostream>
using namespace std;
int main () {
int a[7]={3,4,2,1,16,90,14};
int b[7]={3,4,2,1,16,90,14};
cout<<"metoda na mehurcheto";
int t;
for(int i=0; i<7; i++){                   
for(int j=6; j>i; j--)
{
if(a[j-1] > a[j])
   {
t = a[j-1];
a[j-1] = a[j];
a[j] = t;
}
cout<<"\n";
for(int i=0; i<7; i++) {        
cout<<a[i]<<" ";}
}
}
cout<<"\nprqka selekciq";
int min,r;
for(int i=0;i<7;i++)
{  min=b[i];
    int k=i;
for(int j=i+1;j<7;j++)
if(min>b[j])
{   min=b[j];
   	 k=j;
}
r=b[i];
b[i]=b[k];
b[k]=r;
cout<<"\n";
for(int i=0;i<7;i++)
cout<<b[i]<<" ";
}
    return 0;
}