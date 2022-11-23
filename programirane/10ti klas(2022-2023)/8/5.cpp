#include <iostream>
#include <string.h>
using namespace std;
int main () {
 char a[100];
cin>>a;
for(int i=0;i<strlen(a);i++) {if(a[i]>='a' and a[i]<='x') a[i]=a[i]+2; else if (a[i]=='y') a[i]='a'; else if(a[i]=='z') a[i]='b';}
for(int i=0;i<strlen(a);i++) {cout<<a[i];}
    return 0;
}