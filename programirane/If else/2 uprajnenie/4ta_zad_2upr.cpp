#include <iostream>
using namespace std;
int main () {
double x,y;
cout<<"Vuvedi dvete chisla\n";
cin>>x;
cin>>y;
 if (x==y)
    cout<<x<<"="<<y;
 else if (x>y)
    cout<<x<<">"<<y;
 else
    cout<<x<<"<"<<y;
return 0;
}
