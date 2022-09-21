#include <iostream>
using namespace std;
int main () {
    int min,max,q,p, nechetniBroi, chetniBroi;
    nechetniBroi=0;chetniBroi=0;q=0; p=0;
int A[30];
cout<<"Vuvedi broi uchenici ";
int uchenici;
cin>>uchenici;
for(int i=0;i<uchenici;i++){
    cin>>A[i];
}
max=A[0]; min=A[0];
for(int i=0;i<uchenici;i++){
    if(max<A[i]) max=A[i];
    if(min>A[i]) min=A[i];
    if(i%2==0) {q=A[i]+q; nechetniBroi++;}
    if(i%2==1) {p=A[i]+p; chetniBroi++;}
}
cout<<"Nai-visok resultat: "<<max<<"\n";
cout<<"Nai-nisuk resultat: "<<min<<"\n";
cout<<"Sreden resultat grupa 1: "<<q/nechetniBroi<<"\n";
cout<<"Sreden resultat grupa 2: "<<p/chetniBroi<<"\n";
}
