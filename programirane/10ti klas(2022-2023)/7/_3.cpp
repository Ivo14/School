#include <iostream>
#include <string.h>
using namespace std;
int main () {
char niz[30];
cin>>niz;
for (int i=0;i<strlen(niz);i++){
    niz[i]=toupper(niz[i]);
}
for(int i=0;i<strlen(niz);i++){
    cout<<niz[i];
}
return 0;    
}