#include <iostream>
#include <string.h>
using namespace std;
int main () {
cout<<"Vuvedi niz sus samo malki bukvi\n";
char malki[20];
cin>>malki;
for(int i=0;i<strlen(malki);i++) malki[i]=toupper(malki[i]);
for(int i=0;i<strlen(malki);i++) cout<<malki[i];
    return 0;
}