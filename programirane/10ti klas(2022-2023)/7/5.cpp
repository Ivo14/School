#include <iostream>
#include <string.h>
using namespace std;
int main () {
    char chislo[10];
    int stepen=1;
    int a=0;
    cout<<"Vuvedi chislo\n";
    cin>>chislo;
    int n=strlen(chislo);
    for(int i=n-1;i>=0;i--) {
        int b=chislo[i]-'0';
        a=a+b*stepen;
        stepen=stepen*5;
    }
    cout<<a<<"\n";
    return 0;
}