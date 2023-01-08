#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char chislo[10];
    int openBracketCount = 0;
    int closeBracketCount = 0;
    int numCount = 0;
    int indexOpenBracket = 0;
    int indexCloseBracket = 0;
    bool allnums = true;
    cout<<"Vuvedi chisloto i broinata sistema, kato broinata sistema e v skobi\n";
    cin>>chislo;
    for (int i=0;i<strlen(chislo);i++){
        if(chislo[i]=='(') {openBracketCount++; indexOpenBracket = i;}
        else if (chislo[i]==')') {closeBracketCount++; indexCloseBracket = i;}
        else if (!(chislo[i]>='0' && chislo[i]<='9')) allnums=false;
        else if(chislo[i]>='0'&& chislo[i]<='9') numCount++;
    }
    if(numCount>1 && openBracketCount==1 && closeBracketCount == 1 && indexOpenBracket==indexCloseBracket-2 && allnums && chislo[indexOpenBracket+1]!=0 && chislo[indexOpenBracket+1]!=1 && !(chislo[indexCloseBracket+1]>='0' &&chislo[indexCloseBracket+1]<='9')){
        cout<<"korekten zapis\n";
        cout<<"Chisloto:";
        for(int i=0;i<indexOpenBracket;i++){
            cout<<chislo[i];
        }
        cout<<"\nOsnovata na broinata sistema:"<<chislo[indexOpenBracket+1];
        cout<<"\n";
        for(int i=0;i<strlen(chislo);i++){
            if(chislo[i]=='(' || chislo[i]==')') cout<<'-';
            else cout<<chislo[i];
        }
    }else {cout<<"nepravilen zapis";}
    return 0;
}