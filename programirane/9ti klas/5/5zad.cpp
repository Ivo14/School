#include <iostream>
using namespace std;
int main () {
    int i;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++) {
        cout<<(int)s[i]-'0'<<" ";
    }
return 0;
}
