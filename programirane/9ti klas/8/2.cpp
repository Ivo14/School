#include<iostream>
using namespace std;
int main () {
    int N,a,b,sum;
    cout<<"Vuvedi N\n";
    cin>>N;
    sum=0;
    for (a=2;a<N;a++){
        for (b=1;b<a;b++){
            if (a%b==0) sum=sum+b;
        }
        if (a==sum) cout<<a<<"\n";
        sum=0;
    }
    return 0;
}