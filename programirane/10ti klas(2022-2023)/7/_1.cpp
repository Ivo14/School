#include <iostream>
#include <string.h>
using namespace std;
int main () {
    int br=1;
    char dumi[50];
    cin.getline(dumi,50);
    for (int i=0;i<strlen(dumi);i++) {
        if(dumi[i]==' ') br++;
    }
        for (int i=0;i<strlen(dumi);i++) {
        if(dumi[i]==' ') cout<<"\n";
        else cout<<dumi[i];
    }
    cout<<"\n"<<br;
return 0;    
}