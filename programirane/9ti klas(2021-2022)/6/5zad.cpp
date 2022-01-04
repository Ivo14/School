#include <iostream>
using namespace std;
int main () {
double R;
do{
    cin>>R;
    if (R>0){
    cout<<"Liceto na kruga: "<<R*R*3.14<<"\n";
    cout<<"Obikolka: "<<R*2*3.14<<"\n";}
}
while(R<=0);
    return 0;
}