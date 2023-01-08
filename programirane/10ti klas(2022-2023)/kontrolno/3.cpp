#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char dumichki[25];
    int broiG = 0;
    int broiNepozvoleni = 0;
    cin.getline(dumichki,25);
    for(int i=0;i<strlen(dumichki);i++){
        if(dumichki[i]=='G') broiG++;
    }
    for(int i=0;i<strlen(dumichki);i++){
        if(!(dumichki[i]==' ' || (dumichki[i]>='a' && dumichki[i]<='z') || (dumichki[i]>='A' && dumichki[i]<='Z'))) {broiNepozvoleni++;}
        else {cout<<dumichki[i];}
    }
    cout<<"\nBroi G:"<<broiG<<"\n";
    cout<<"broi Nepozvoleni simvoli:"<<broiNepozvoleni<<"\n";
    return 0;
}