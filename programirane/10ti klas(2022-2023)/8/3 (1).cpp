#include <iostream>
#include <string.h>
using namespace std;
int br_cifri(char a[100]) {
int br=0;
for(int i=0;i<strlen(a);i++){
    if(a[i]>='0' && a[i]<='9') {br=br+1;}
}
return br;
}
int main () {
char a[100];
cin>>a;cout<<br_cifri(a)<<"\n"; char Ion[100];
for(int i=0;i<strlen(a);i++){
    Ion[i]=a[i];
}
for(int i=0;i<9;i++) {
        cin>>a; cout<<br_cifri(a)<<"\n";
if(strlen(Ion)<strlen(a)) {for(int i=0;i<strlen(a);i++){Ion[i]=a[i];}}
}
cout<<"Nai-dulug: ";
for(int i=0;i<strlen(Ion);i++){
    cout<<Ion[i];
}
return 0;
}

