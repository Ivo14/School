#include <iostream>
using namespace std;
int main () {
int n;
int M[n];

cout<<"Vuvedi broq elementi\n";
cin>>n;
for(int i=0;i<n;i++)
{
    cout<<"M["<<i<<"]=";
    cin>>M[i];
}
int max=M[0];
for (int i=1;i<n;i++){
if(max<M[i]) max=M[i];} 
cout<<"Maximalniq elementut e "<<max;
    return 0;
}