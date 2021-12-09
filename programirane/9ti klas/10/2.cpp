#include <iostream>
using namespace std;
int main () {
int M[20];
int p=0;
int n=5;
for(int i=0;i<n;i++)
{
    cout<<"M["<<i<<"]=";
    cin>>M[i];
}
for (int i=0;i<n;i++){
p=p+M[i];}
cout<<"Sborut e "<<p;
    return 0;
}