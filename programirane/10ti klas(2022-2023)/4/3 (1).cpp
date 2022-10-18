#include <iostream>
using namespace std;
double calculate1 (double a) {
return a*a-(3.14*(a/2)*(a/2));
}
double calculate2 (double a) {
return 3.14*(a/2)*(a/2)-(a/2)*(a/2)*2;
}

int main () {
    double a,a1;
    cout<<"strana na kvadrata: ";
    cin>>a;
    cout<<"Lice na ocvetenata chast: "<<calculate1(a);
    cout<<"\nDiametur na okrushnostta: ";
    cin>>a1;
    cout<<"Lice na ocvetenata chast: "<<calculate2(a1);
}
