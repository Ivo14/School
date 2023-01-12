#include <iostream>
#include <string.h>
using namespace std;
struct stoka{
    char ime[40];
    char mernaEdinica[40];
    int edinichnaCena;
    int kolichestvo;
};
int main()
{
stoka S[20];
int b;
cout<<"Vuvedi broi stoki, koito shte budat vuvedeni";
cin>>b;
for(int i=0;i<b;i++){
    cout<<"Ime: ";
    cin>>S[i].ime;
    cout<<"Merna edinica: ";
    cin>>S[i].mernaEdinica;
    cout<<"Edinichna cena: ";
    cin>>S[i].edinichnaCena;
     cout<<"Kolichestvo: ";
    cin>>S[i].kolichestvo;
}
int maxIndex=0;
for(int i=0;i<b;i++){
    if(S[maxIndex].edinichnaCena<S[i].edinichnaCena) maxIndex=i;
}
cout<<"\nIme na stoka s nai-golqma edinichna cena: "<<S[maxIndex].ime;
cout<<"\nVuvedi ime na stoka: ";
char ii[40];
cin>>ii;
for(int i=0;i<b;i++){
    if(strcmp(ii,S[i].ime)==0) cout<<"Nalichno kolichestvo: "<<S[i].kolichestvo<<"\nCena: "<<S[i].edinichnaCena;
}
for(int i=0;i<b;i++){
   if(S[i].kolichestvo>0) cout<<"\nIme: "<<S[i].ime<<" Stoinost: "<<S[i].kolichestvo * S[i].edinichnaCena;
}
    return 0;
}