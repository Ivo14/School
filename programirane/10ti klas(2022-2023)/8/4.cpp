#include <iostream>
#include <string.h>
#include <iostream>
#include <string.h>
using namespace std;
void replace(char a[],char b, char c) {
    for (int i=0;i<strlen(a);i++){ if (a[i]==b) a[i]=c;}
}
int main () {
 char a[100];
cin>>a;
replace(a,'a','A');
replace(a,'b','B');
replace(a,'c','C');
replace(a,'d','D');
replace(a,'e','E');
replace(a,'f','F');
replace(a,'g','G');
replace(a,'h','H');
replace(a,'i','I');
replace(a,'j','J');
replace(a,'k','K');
replace(a,'l','L');
replace(a,'m','M');
replace(a,'n','N');
replace(a,'o','O');
replace(a,'p','P');
replace(a,'q','Q');
replace(a,'r','R');
replace(a,'s','S');
replace(a,'t','T');
replace(a,'u','U');
replace(a,'v','V');
replace(a,'w','W');
replace(a,'x','X');
replace(a,'y','Y');
replace(a,'z','Z');
for(int i=0;i<strlen(a);i++) {if(a[i]>='0' and a[i]<'9') a[i]++; else if (a[i]==9) a[i]=0;}
for(int i=0;i<strlen(a);i++) {cout<<a[i];}
    return 0;
}