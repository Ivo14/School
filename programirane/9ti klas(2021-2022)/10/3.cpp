#include <iostream>
using namespace std;
int main () {
int n;
int M[31];
int sum=0;
int temp;
cout<<"Vuvedi temperatura\n";
cin>>temp;
cout<<"Vuvedi broq na dnite ot meseca\n";
cin>>n;
for(int i=0;i<n;i++)
{
    cout<<"den "<<i+1<<": ";
    cin>>M[i];
}
for (int i=0;i<n;i++){
if(temp==M[i]) sum=sum+1;} 
cout<<"Predvaritelno dadenata temperatura se sreshta "<<sum<<" puti";
    return 0;
}