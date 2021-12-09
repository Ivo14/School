#include <iostream>
using namespace std;
int main () {
int M[20];
int p=1;
int n=20;
for(int i=0;i<n;i++)
{
    cout<<"M["<<i<<"]=";
    cin>>M[i];
}
for (int i=0;i<n;i++){
p=p*M[i];}
cout<<"Proizvedenieto e "<<p;
    return 0;
}