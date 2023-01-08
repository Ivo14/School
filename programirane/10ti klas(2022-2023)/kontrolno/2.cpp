#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int broiDumi = 1;
    char dumi[100];
    cin.getline(dumi,100);
    for(int i=0;i<strlen(dumi);i++){
        if(dumi[i]!=',' && dumi[i]!='-' && dumi[i]!=' ') cout<<dumi[i];
        else {cout<<"\n";broiDumi++;}
    }
    cout<<"\nBroi Dumi:"<<broiDumi<<"\n";
        for(int i=0;i<strlen(dumi);i++){
        if(dumi[i]!=',' && dumi[i]!='-' && dumi[i]!=' ') cout<<dumi[i];
        else {cout<<" ";broiDumi++;}
    }
    return 0;
}
