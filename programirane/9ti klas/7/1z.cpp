#include <iostream>
using namespace std;
int main () {
int a;
while(a!=0)
{
    cin>>a;
    if (a>0) cout<<"polojitelno\n";
    else if (a<0) cout<<"otricatelno\n";
}
    return 0;
}