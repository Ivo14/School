#include <iostream>
#include <string.h>
using namespace std;
int main () {
char a[50];
char b[50];
int k=0;
cin.getline(a,50);
for(int i=0;i<strlen(a);i++){
    if(a[i]>='a' and a[i]<='z') {b[k]=a[i];k++;}
    else if(a[i]>='A' and a[i]<='Z') {b[k]=a[i];k++;}
    else if(a[i]==' ') {b[k]=a[i];k++;}
}
for(int i=0;i<strlen(b);i++) {
    cout<<b[i];
}
return 0;
}

