#include <iostream>
#include<math.h>
using namespace std;
double razst(double x1, double y1, double x2, double y2) {
return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

}
int main () {
    int a,b,c,d;
cout<<"Vuvedi koordinatite na tochka A\n";
cin>>a>>b;
cout<<"Vuvedi koordinatite na tochka B\n";
cin>>c>>d;
cout<<"Razstoqnieto mejdu tqh e "<<razst(a,b,c,d);
return 0;
}
