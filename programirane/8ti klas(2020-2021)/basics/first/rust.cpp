#include <iostream>
using namespace std;

int main () {
 int P, T, x;
 cout<<"Kolko e visok chovetut v cm?\n";
    cin>>P;
    cout<<"Chovetut muj ili jena e?\n izberete 1 za jena \n izberete 2 za muj\n";
    cin>>x;
    T=P-100-(P-150)/(2*x);
    cout<<"Idealnoto teglo na chovekut e "<<T;
    return 0;
}
