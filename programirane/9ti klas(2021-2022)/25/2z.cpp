#include<iostream>
using namespace std;
int nod(int a,int b){
    if(a<b) swap(a,b);
    while(b!=0){
        int c=a;
        a=b;
        b=c%a;
    }
    return a;
}
int main(){
    int a[20];
    for(int i=0;i<20;i++) cin>>a[i];
    int NOD=nod(a[0],a[1]);
    for(int i=2;i<20;i++){
        NOD=nod(NOD,a[i]);
    }
    cout<<NOD<<"\n";
    return 0;
}