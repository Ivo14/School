#include <iostream>
using namespace std;
int main () {
double x,y;
cout<<"Vuvedi drob s polojitelni chislitel i znamenatel\n";
cin>>x;
cout<<"__\n";
cin>>y;
{
    if (x<0 or y<0)
        cout<<"kazah polojitelni";
    else if (x>=y)
        cout<<"improper fraction";
    else
        cout<<"proper fraction";
}
return 0;
}


