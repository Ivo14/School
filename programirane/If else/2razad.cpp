#include <iostream>
using namespace std;
int main () {
double x,y;
cout<<"Vuvedi ednoto chislo\n";
cin>>x;
cout<<"Vuvedi drugoto chislo\n";
cin>>y;
{
    if (x>y)
        cout<<x;
        else if(x==y)
            cout<<"Ravni sa";
    else
        cout<<y;
}
return 0;
}

