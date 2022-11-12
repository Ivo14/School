#include <iostream>
#include <string.h>
using namespace std;
int main () {
    char a[50];
    int countr=0;
    cin.getline(a, 50);
    for(int i=0;i<strlen(a);i++) {
        if(a[i]>='0' && a[i]<='9') cout<<a[i];
        if(a[i]==' ') {cout<<"\n";countr++;}
    }
    cout<<"\n Broi chisla: "<<countr;
return 0;
}

