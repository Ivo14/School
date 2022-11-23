#include <iostream>
#include <string.h>
using namespace std;
int find(char a[],char b){
    int br=0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]==b) br++;
    }
    return br;
}
int main () {
 char a[100];
cin>>a;
cout<<"Broi 0: "<<find(a,'0')<<"\n";
cout<<"Broi 1: "<<find(a,'1')<<"\n";
cout<<"Broi 2: "<<find(a,'2')<<"\n";
cout<<"Broi 3: "<<find(a,'3')<<"\n";
cout<<"Broi 4: "<<find(a,'4')<<"\n";
cout<<"Broi 5: "<<find(a,'5')<<"\n";
cout<<"Broi 6: "<<find(a,'6')<<"\n";
cout<<"Broi 7: "<<find(a,'7')<<"\n";
cout<<"Broi 8: "<<find(a,'8')<<"\n";
cout<<"Broi 9: "<<find(a,'9')<<"\n";
    return 0;
}