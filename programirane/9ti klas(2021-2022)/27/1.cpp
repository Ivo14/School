#include <iostream>
using namespace std;


int cout_even(int K[],int k){
int brr=0;
for(int i=0;i<k;i++){
    if(K[i]%2==0) brr=brr+1;
}
return brr;
}

int nod(int a,int b){
  if (b == 0)
     return a;
  else
     return nod(b,a%b);}

int nodA(int K[],int k,int o){
for(int i=2;i<k-1;i++){
    o=nod(o,K[i]);
}
return o;
}

int max_dist(int K[],int k){
int max=K[0];
int min=K[0];
    for(int i=0;i<k;i++){
        if(K[i]>max) max=K[i];
        if(K[i]<min) min=K[i];
    }
 return max-min;
}


void out_odd_pos(int K[],int k){
for(int i=0;i<k;i++){
    if(K[i]%2==1) cout<<i<<" - "<<K[i]<<"\n";
}
}


bool check(int K[],int k,int m){int ch=0;for(int i=0;i<k;i++)if(K[i]==m) ch=1;if(ch==0) return false; else return true;}

void write_revers(int K[],int k){for(int i=k-1;i>-1;i--){cout<<K[i]<<" ";}}


void d(int K[],int k) {
    int br=0; int br1=0;
for(int i=0;i<k-1;i++) {
    if(K[i]<K[i+1]) br=br+1;
if(K[i]>K[i+1]) br1=br1+1;
}
if(br==k-1) cout<<"narashtvasht";
if(br1==k-1) cout<<"namalqvashta";
if(br1!=k-1 and br!=k-1)cout<<"neopredelena";
}


int main () {
int K[30];
int k;
cout<<"broi elementi\n";
cin>>k;
cout<<"Vuvedi elementite na masiva\n";
for(int i=0;i<k;i++)
{
    cin>>K[i];
}
cout<<"\nvid: "; 
d(K,k);
cout<<"\nBroi chetni: "<<cout_even(K,k)<<"\n";
cout<<"nechetni:\n"; out_odd_pos(K,k);
cout<<"Masiva naobratno: ";
write_revers(K,k);
int m;
cout<<"\nVuvedi chisloto, koeto iskash da proverish dali e v masiva\n";
cin>>m;
cout<<"Dali chisloto e v masiva: "<<check(K,k,m);
cout<<"\nNai-golqma razlika mejdu chisla v masiva: "<<max_dist(K,k);
  int o=nod(K[0],K[1]);
cout<<"\nNod: "<<nodA(K,k,o);

return 0;
}