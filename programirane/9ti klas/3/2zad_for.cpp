#include <iostream>
using namespace std;
int main () {
int a,d;
cin>>a;
for (d=1;d<a+1;d=d+1){
        if(a%d==0) cout<<d<<"\n";;
}
return 0;
}