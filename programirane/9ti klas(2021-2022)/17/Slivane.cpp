#include <iostream>
using namespace std;
int main() {

    int P,Q;
    int n,n1;
    cout<<"Vuvedi P i Q\n";
    cin>>P;
    cin>>Q;
    int A[P];
    int B[Q];


for(int i=0;i<P;i++)
{
    cout<<"A["<<i<<"]=";
    cin>>A[i];
}

for(int i=0;i<Q;i++)
{
    cout<<"B["<<i<<"]=";
    cin>>B[i];
} 



int flag,r; 
for(int i=P-1;i>0;i--) 
{   flag=0; 
for(int j=0;j<i;j++) 
if(A[j]>A[j+1]) 
{ 	r=A[j]; 
A[j]=A[j+1]; 
A[j+1]=r; 
flag=1; 
} 
if(!flag) break; 
}
cout<<"Vuzhodqsht red na A:\n";
for(int i=0;i<P;i++)
{
cout<<A[i]<<" ";
}



int flag1,r1; 
for(int i=Q-1;i>0;i--) 
{   flag1=0; 
for(int j=0;j<i;j++) 
if(B[j]>B[j+1]) 
{ 	r1=B[j]; 
B[j]=B[j+1]; 
B[j+1]=r1; 
flag1=1; 
} 
if(!flag1) break; 
} 
cout<<"\nVuzhodqsht red na B:\n";
for(int i=0;i<Q;i++)
{
cout<<B[i]<<" ";
}

int H=P+Q;
int C[H];
int p1=0,p2=0;
int p3=-1;
while (p1<=P-1&&p2<=Q-1)
if(A[p1]<=B[p2])
{
	p3++;
	C[p3]=A[p1];
	p1++;
}
else
{         p3++;
          C[p3]=B[p2];
          p2++;
}
if (p1>P-1)
     for (int i=p2;i<=Q;i++)
           {       p3++;
              C[p3]=B[i];
          }
else
         for(int i=p1;i<=P-1;i++)
{          p3++;
          C[p3]=A[i];
}


cout<<"\nVuzhodqsht red na C:\n";
for(int i=0;i<H;i++)
{
    cout<<C[i]<<" ";
}
int x,l,index;
cout<<"\nVuvedi X\n";
cin>>x;
for(int i=0;i<H;i++)
{
    if(C[i]==x) {l=1; index=i;}
}
if (l==1) cout<<"Yes, sudurja se v C["<<index<<"]";
else cout<<"No";
return 0;
}