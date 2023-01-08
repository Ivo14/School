#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char simvoli1[100];
    char simvoli[100];
    int current = 0;
    int purviIndex = 0;
    int broiDumi = 0;
    cin.getline(simvoli1,100);
    for(int i=0;i<strlen(simvoli1);i++){
        if(simvoli1[i]=='.' || simvoli1[i]=='-' || simvoli1[i]==' ') {cout<<simvoli1[i];simvoli[current]=simvoli1[i];current++;}
    }
    cout<<"\n";
    for(int i=0;i<strlen(simvoli);i++){
        if(simvoli[i]==' ' && (simvoli[i-1]=='.' || simvoli[i-1]=='-')) {broiDumi++;}
    }
    if(simvoli[strlen(simvoli)]!=' ') broiDumi++;
    cout<<"broi dumi:"<<broiDumi<<"\n";
    
    for(int i=0;i<strlen(simvoli);i++){
        if(simvoli[i]=='.' || simvoli[i]=='-') {purviIndex=i;break;}
    }
    
    cout<<"Purva duma: ";
    for(int i=purviIndex;i<strlen(simvoli);i++){
        if(simvoli[i]==' ') {break;}
        else cout<<simvoli[i];
    }
    return 0;
}