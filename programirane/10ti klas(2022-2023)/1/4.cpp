#include <iostream>
using namespace std;
int main () {
int G[20]; int a;
for(int i=0;i<20;i++){
    cin>>G[i];
}
for(int i=0;i<20;i++){
    if(i%2==0) {a=G[i]; G[i]=G[i+1]; G[i+1]=a;}
}
for(int i=0;i<20;i++){
    cout<<G[i]<< " ";
}
}
