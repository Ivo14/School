#include <iostream>
#include <string.h>
using namespace std;
int main () {
char str[30];
int countr=0;
int c=0;
int s=0;
cin>>str;
for(int i=0;i<strlen(str);i++){
    if(str[i]>='0' && str[i]<='9') countr=countr+1;
    if(str[i]>='A' && str[i]<='Z') c=c+1;
    if(str[i]>='a' && str[i]<='z') s=s+1;
}
cout<<"digits: "<<countr<<"\n";
cout<<"Capitals: "<<c<<"\n";
cout<<"Small: "<<s<<"\n";
return 0;
}
