#include <iostream>
using namespace std;
int main () {
int a,i;
i=1;
while (i<11) {
        cin>>a;
    if (a>0) cout<< "polojitelno"<<"\n";
    else if (a==0) cout<<"0";
    else cout<<"otricatelno"<<"\n";
    i=i+1;
}
return 0;
}
