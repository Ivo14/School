#include <iostream>
#include <math.h>
using namespace std;
double razst(double x1, double y1, double x2, double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main () {
int x1;
int x2;
int y1;
int y2;
cout<<"Vuvedi coordinatite na tochka A\n";
cin>>x1;
cin>>y1;
cout<<"Vuvedi coordinatite na tochka B\n";
cin>>x2;
cin>>y2;
if(razst(x1,y1,0,0)<razst(x2,y2,0,0)) cout<<"tochka A e po-blizo do centura na cordinatnata sistema.";
else if(razst(x1,y1,0,0)>razst(x2,y2,0,0)) cout<<"tochka B e po-blizo do centura na cordinatnata sistema.";
else cout<<"Na ravno raztoqnie sa.";
}
