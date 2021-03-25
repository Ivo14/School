#include <iostream>
#include <math.h>
using namespace std;
int main () {
double x1,x2,y1,y2,a,b,c;
cout<<"vudedete suotvetno duljinata i shirochinata na purvata tochka\n";
cin>>x1;
cin>>x2;
cout<<"vudedete suotvetno duljinata i shirochinata na vtorata tochka\n";
cin>>y1;
cin>>y2;
b=pow(x1, 2)-pow(x2, 2);
c=pow(y1, 2)-pow(y2, 2);
a=b+c;
cout<<"Raztoqnieto mejdu tqh e "<<sqrt(a);
return 0;
}
