#include <iostream>
using namespace std;
int main () {
int a,i;
for (i=1;i<11;i++) {
        cin>>a;
    if (a>0) cout<< "polojitelno"<<"\n";
    else if (a==0) cout<<"0";
    else cout<<"otricatelno"<<"\n";
}
return 0;
}
