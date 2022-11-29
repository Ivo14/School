#include <iostream>
#include <string.h>
using namespace std;
int main () {
char c[50];
cin.getline(c,50);
for(int i=0;i<strlen(c);i++){
    if(c[i]!=' ') cout<<c[i];
    else if(c[i]==' ' and c[i-1]!=' ') cout<<c[i];
}
return 0;
}
