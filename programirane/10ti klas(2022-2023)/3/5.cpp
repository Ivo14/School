#include <iostream>
#include<math.h>
using namespace std;
bool is_triange123(int a,int b,int c) {
    if(a<b+c and b<a+c and c<b+a) return true;
    else return false;
}
void grow(int a,int b,int c){
    int r;
    if(a>b) {r=a;a=b;b=r;}
    if(b>c) {r=b;b=c;c=r;}
    if(a>c) {r=a;a=c;c=a;}
}
int main () {
    int a,b,c;
    cin>>a>>b>>c;
   if(is_triange123(a,b,c)) cout<<"Ima takuv triugulnik";
   else cout<<"Nqma takuv triugulnik";
   grow(a,b,c);
   if(is_triange123(a,b,c) and a*a+b*b==c*c) cout<<"\nPravougulen\n";
   if(is_triange123(a,b,c) and a*a+b*b<c*c) cout<<"\nTupougulen\n";
   if(is_triange123(a,b,c) and a*a+b*b>c*c) cout<<"\nOstrougulen\n";
return 0;
}
