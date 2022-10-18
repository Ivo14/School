#include <iostream>
#include <string>
using namespace std;

int ideal_weigh(string a, int rust){
    int x;
if(a=="f") x=2;
if(a=="m") x=4;
return rust-100-(rust-150)/x;
}
int main () {
string pol;
int rust;
while (1){cout<<"Vuvedi rust\n";
cin>>rust; if(rust<=0) {cout<<"END";break;}
cout<<"Vuvedi pol: f za momiche, m za momche\n";
cin>>pol; if(pol!="f" and pol!="m") {cout<<"END"; break;}
cout<<"Ideal weigh:"<<ideal_weigh(pol,rust)<<"\n";}
}
