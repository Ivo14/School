#include <iostream>
#include <string.h>
using namespace std;
int main () {
char a[50];
char b[50];
cin>>a;
cin>>b;
int k=0;
int m=0;
if(strlen(a)==strlen(b)) {k=1;
for(int i=0;i<strlen(a);i++){
    if(a[i]!=b[i]) m=1;
    if(tolower(a[i])!=tolower(b[i])) k=0;
}
}
if(m==1 and k==1) cout<<"similar";
else cout<<"not similar";
return 0;
}
