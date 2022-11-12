#include <iostream>
#include <string.h>
using namespace std;
int main () {
    char a[20];
    int c;
cin>>a;
for (int i=0;i<strlen(a);i++) {
    if (a[i]>='a' && a[i]<='z') c=1;
    else if (a[i]>='A' && a[i]<='Z') c=1;
    else if(a[i]>='0' && a[i]<='9') c=1;
    else if(a[i]=='_') c=1;
    else {c=0;break;}
}
if(c==0) cout<<"NO";
else cout<<"YES";
return 0;
}

