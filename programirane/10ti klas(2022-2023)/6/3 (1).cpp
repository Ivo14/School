#include <iostream>
#include <string.h>
using namespace std;
int main () {
char purvi[20]="PurviChar";
char vtori[20]="VtoriChar";
char ccopy[20];
char vtoriDo5[5];
strcpy(vtoriDo5,vtori);
strcpy(ccopy,purvi);
strcpy(ccopy,vtori);
for(int i=0;i<strlen(purvi);i++){cout<<purvi[i];}
cout<<"\n";
for(int i=0;i<strlen(vtori);i++){cout<<vtori[i];}
cout<<"\n";
for(int i=0;i<strlen(ccopy);i++){cout<<ccopy[i];}
cout<<"\n";

strcat(ccopy, vtoriDo5);
for(int i=0;i<strlen(ccopy);i++){cout<<ccopy[i];}

return 0;
}
