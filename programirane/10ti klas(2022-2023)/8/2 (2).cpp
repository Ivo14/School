#include <iostream>
#include <string.h>
using namespace std;
bool is_polindrom(char a[50]){
    char b[50];int v=0; int x=0;
for (int i=0;i<strlen(a);i++)
          {
           b[i]=a[i];
          }
              for (int i=strlen(a)-1;i>-1;i--)
          {
           if(b[i]!=a[x]) {return false;v=1;break;}
           x++;
          }
          if(v==0) return true;
}
int main () {
    char a[50]; int br=0;
    cout<<"Vuvedi 10 niza";
    for(int i=0;i<10;i++) {
        cin>>a;
            if(is_polindrom(a)) br=br+1;
    }
    cout<<"Broi polindromi: "<<br;
return 0;
}
