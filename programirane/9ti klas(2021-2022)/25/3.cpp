#include <iostream>
using namespace std;
void grow(int &a,int &b,int &c){
if(a>b) swap(a,b);
if(b>c) swap(b,c);
if(a>b) swap(a,b);
}
bool is_triange123(int a,int b,int c){
if(a>b+c or b>c+a or c>b+a) return false;
else return true;
}
int main () {
int a,b,c;
cout<<"Vuvedi duljinite na stranite\n";
cin>>a>>b>>c;
grow(a,b,c);
int be=is_triange123(a,b,c);
if(be==0) cout<<"Ne sushtestvuva takuw triugulnik\n";
else if(a*a+b*b==c*c) cout<<"pravougulen"; 
else if (a*a+b*b<c*c) cout<<"tupougulen";
else if (a*a+b*b>c*c) cout<<"ostrougulen";
    return 0;
}