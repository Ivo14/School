#include <iostream>
using namespace std;
int main () {
double x,A,B,C,S;
cout<<"Vuvedi kolko moneti po 20st ima\n";
cin>>A;
cout<<"Vuvedi kolko moneti po 50st ima\n";
cin>>B;
cout<<"Vuvedi kolko moneti po 1lev ima\n";
cin>>C;
cout<<"Vuvedi kolko struva knigata\n";
cin>>x;
S=A*0.20+B*0.50+C;
{
    if (S>=x)
        cout<<"Moje da se kupi knigata";
    else
        cout<<"Ne moje da si kupi knigata";
}
return 0;
}

