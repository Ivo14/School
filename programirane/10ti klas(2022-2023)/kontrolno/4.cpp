#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char niz[60];
    cin.getline(niz,60);
    int duljina = 0;
    for(int i=0;i<strlen(niz);i++){
        if(niz[i]!=' '){duljina++;}
    }
    cout<<"Duljina na niza, ako se premahnat vsichki intervali: "<<duljina<<"\n";
    for(int i=0;i<strlen(niz);i++){
        if(niz[i]>='0' && niz[i]<='9' ){cout<<'!';}
        else {cout<<niz[i];}
    }
    cout<<"\n";
    for(int i=0;i<strlen(niz);i++){
        if(niz[i]>='A' && niz[i]<='Z' ){cout<<niz[i];}
    }
    cout<<"\n";
    for(int i=0;i<strlen(niz);i++){
        if(niz[i]>='a' && niz[i]<='z' ){cout<<niz[i];}
    }
    return 0;
}
