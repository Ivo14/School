#include <iostream>
#include <string.h>
using namespace std;
int main () {
char one[100]="edno",two[10]="dve",three[10]="tri",four[10]="chetiri",five[10]="pet",six[10]="secht",seven[10]="sedem",eight[10]="osem";
strcat(one,two);
strcat(one, three);
strcat(one,four);
strcat(one,five);
strcat(one,six);
strcat(one,seven);
strcat(one,eight);
for(int i=0;i<strlen(one);i++) cout<<one[i];

    return 0;
}