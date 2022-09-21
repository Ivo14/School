#include <iostream>
using namespace std;
int main () {
    int uchenici;
    int m;
    cout<<"Vuvedi broi uchenici: ";
    cin>>uchenici;
    int A[30];
    int Q=0;
    for(int i=0;i<uchenici;i++){
        cin>>A[i];
    }
    m=A[0];
     for(int i=0;i<uchenici;i++){
        Q=A[i]+Q;
        if(m<A[i]) m=A[i];
    }
    cout<<"sreden rust: "<<Q/uchenici<<"\n";
    cout<<"Nai visok rust: "<<m;

}
