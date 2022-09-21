#include <iostream>
#include <string>
using namespace std;
int main () {
string Stringe;
getline(cin, Stringe);
string kew;
for(int i=Stringe.size()-1;i>=0 ;i--){
    kew+=Stringe[i];
}
cout<<kew;
    return 0;
}