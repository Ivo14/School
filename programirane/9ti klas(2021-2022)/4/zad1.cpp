#include <iostream>
using namespace std;
int main () {
int a,br,sum;
br=0;
sum=0;
for (int i=1;i<13;i++){
    cin>>a;
    sum=sum+a;
    if (a==6) br=br+1;

}
cout<<"Sreden uspeh:"<<sum/12<<"\n";
cout<<"Broi otlichni ocenki:"<<br;
return 0;
}
