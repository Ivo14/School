#include <iostream>
#include <string.h>
using namespace std;
int main () {
 char nb[100];
 cin.getline(nb, 100);
 for (int i=0;i<strlen(nb);i++) {
     if (nb[i]>='0' and nb[i]<='9') cout<<nb[i];
     else if (nb[i]==' ') cout<<"\n";
 }
    return 0;
}