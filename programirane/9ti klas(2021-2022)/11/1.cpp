#include <iostream>
using namespace std;
int main () {
    double pr;
    cout<<"Predvaritelen uspeh:";
    cin>>pr;
double b[30];
int n;
cout<<"broi uchenici:";
cin>>n;
for(int i=0;i<n;i++){
    cin>>b[i];}
int i=0;
for(int i=0;i<n;i++){
        if(b[i]==pr) { cout<<"ima"; break;}
}

return 0;
}
