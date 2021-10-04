#include <iostream>
using namespace std;
int main () {
int x1,x2,y1,y2;
cout<<"Vuvedi kordinatite na sreshtupolojni strani\n";
cin>>x1;
cin>>x2;
cin>>y1;
cin>>y2;
if (x2>x1 && y1<y2)
cout<<"Liceto e "<<(x2-x1)*(y2-y1);
else if (x1>x2 && y1>y2) cout<<"Liceto e "<<(x1-x2)*(y1-y2);
cout<<"\nCordinatite na drugite sa "<<x1<<";"<<y2<<" i "<<y1<<" ; "<<x2;
    return 0;
}