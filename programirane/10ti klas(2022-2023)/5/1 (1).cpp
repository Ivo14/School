#include <iostream>
using namespace std;
int vid(int K[],int k){
    int c=0; int c1=0;
for(int i=0;i<k-1;i++)
    {
        if(K[i]<K[i+1]) c=c+1;
        if(K[i]>K[i+1]) c1=c1+1;}
        if (c==k-1) return 1;
        else if(c1==k-1) return -1;
        else return 0;
}
int count_even (int K[],int k) {
    int even=0;
    for(int i=0;i<k;i++) {
    if(K[i]%2==0) even=even+1;
}
return even;
}
void out_odd_pos(int K[],int k) {
for (int i=0;i<k;i++) {
    if(K[i]%2!=0) cout<<K[i]<<" ";
}
}

void write_reverse(int K[],int k){
for (int i=k-1;i>=0;i--){cout<<K[i]<<" ";}
}
int ImaLiM(int K[],int k,int m){
    int tru=0;
    for(int i=0;i<k;i++){
if (K[i]==m) tru=1;}
return tru;
}

int Max_dist(int K[],int k){
    int max=K[0]; int min=K[0];
for (int i=0;i<k;i++) {
    if (max<K[i]) max=K[i];
    if (min>K[i]) min=K[i];
}
return max-min;
}
int gcd(int k,int m){
    int gcd=1;
    for(int i=2;i<=k and i<=m;i++){
        if(k%i==0 and m%i==0) gcd=i;
    }
return gcd;}

    int gcd2(int K[],int k){
        int gcD=gcd(K[0],K[1]);
for (int i=2;i<k;i++) {
    gcd(gcD, K[i]);
}
return gcD;
    }


int main () {
int K[29],k;
cout<<"Vuvedi k\n";
cin>>k;
cout<<"Vuvedi elementite na masiva\n";
for(int i=0;i<k;i++) {
    cin>>K[i];
}
cout<<"Vid:"<<vid(K,k);
cout<<"\nBroi chetni chisla: "<<count_even(K,k);
cout<<"\nIzvejdane na nechtenite chisla: \n";
out_odd_pos(K,k);
cout<<"\nMasiva v obraten red:\n";
write_reverse(K,k);
int m;
cout<<"\nVuvedi M\n"; cin>>m;
cout<<"Ima li M v masiva: "<<ImaLiM(K,k,m);
cout<<"\nNai-golqma razlika mejdu dva elementa v masiva: "<<Max_dist(K,k);
cout<<"\nNai-golqm obsht delitel: "<<gcd2(K,k);
return 0;
}
