#include <iostream>
#include <string.h>
using namespace std;
int main () {
    int a;
char num[100];
cin>>num;
for(int i=0;i<strlen(num);i++){
    if(num[i]>='0' and num[i]<='9') a=0;
    else {a=1; break;}
}
if(num[0]!=0 and a==0) cout<<"correct";
else cout<<"wrong";
return 0;    
}