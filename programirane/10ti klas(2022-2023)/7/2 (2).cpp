#include <iostream>
#include <string.h>
using namespace std;
int main () {
    char a[20];
    char b[20];
    cin>>a;
    cin>>b;
if(strcmp(a,b)==0) cout<<a<<"="<<b;
else if (strcmp(a,b)==1) cout<<a<<">"<<b;
else if (strcmp(a,b)==-1) cout<<a<<"<"<<b;
return 0;
}
