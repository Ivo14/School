#include <iostream>
using namespace std;
int rec(int x,int n){
    if (n==0) return 1;
else if (n==1) return x;
else return x*rec(x,n-1);
}
int main () {
    int x, n;
    cout<<"Vuvedi chisloto\n";
cin>>x;
cout<<"Vuvedi stepenta\n";
cin>>n;
cout<<rec(x,n);
cout<<"\nStoinostite, polucheni ot stepenite, koito sa po-malki ot "<<n<<" i kratni na 5:\n";
for(int i=1;i<n;i++){
    if(i%5==0) cout<<rec(x,i)<<" ";
}
return 0;
}
