#include <iostream>
#include <string.h>
using namespace std;
int main () {
char ime[45];
char prezime[15];
char familia[15];
cin>>ime;
cin>>prezime;
cin>>familia;
cout<<"Iniciali: "<<ime[0]<<prezime[0]<<familia[0]<<"\n";
strcat(ime,prezime);
strcat(ime,familia);
for(int i=0;i<strlen(ime);i++)
cout<<ime[i];
cout<<"\nDuljina: "<<strlen(ime);
int countr=0;
for(int i=0;i<strlen(ime);i++){
    if(ime[i]=='a') countr=countr+1;
}
cout<<"\nBroi na a: "<<countr;
return 0;
}
