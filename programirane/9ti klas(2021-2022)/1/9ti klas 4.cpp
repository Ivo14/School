#include <iostream>
using namespace std;
int main () {
char c;
int something;
cout<<"Vuvedi simbol";
cin>>c;

something=int(c);
if (something>96 && something<123) cout<<"letter lower";
else if (something>64 && something<91) cout<<"letter upper";
else cout<<"other";
return 0;
}
