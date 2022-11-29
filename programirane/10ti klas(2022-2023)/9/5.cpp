#include <iostream>
#include <string.h>
using namespace std;
void coding (char a[50]) {

    char q;
q=a[0];
a[0]=a[strlen(a)-1];
a[strlen(a)-1]=q;
q=a[1];
a[1]=a[strlen(a)-2];
a[strlen(a)-2]=q;
for(int i=0;i<strlen(a);i++){
    cout<<a[i];
}
}
int main () {
char a[50];
cin>>a;
coding(a);
return 0;
}
