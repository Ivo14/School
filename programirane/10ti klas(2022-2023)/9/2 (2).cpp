#include <iostream>
#include <string.h>
using namespace std;
int main () {
char a[50];
char b[50];
cin>>a;
cin>>b;
char x;
for(int i=0;i<strlen(a);i++){
        x=toupper(a[i]);
    cout<<x;
}
cout<<"\n";
for(int i=0;i<strlen(a);i++){
    x=tolower(a[i]);
    cout<<x;
}
cout<<"\n";
for(int i=0;i<strlen(b);i++){
     x=toupper(b[i]);
    cout<<x;
}
cout<<"\n";
for(int i=0;i<strlen(b);i++){
     x=tolower(b[i]);
    cout<<x;
}
return 0;
}
