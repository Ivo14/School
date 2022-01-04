#include <iostream>
using namespace std;
int main () {
    int a,a1,a2,br;
    int i;
    string s;
    br=0;
    cin>>s;
    for(i=0;i<s.size();i++) {
        cout<<(int)s[i]-'0'<<"\n";
        br=br+(int)s[i]-'0';
    }
    i--;
 a1=s[i] - '0';
 i--;
a2=(s[i] - '0')*10+a1;
i--;
a=(s[i] - '0')*100+a2;
    if (a%8==0) {
cout<<"Deli se na 8\n";
    }
    else cout<<"Ne se deli na 8\n";
cout<<"Broi cifri:"<<s.size();
cout<<"\nSuma na cifrite:"<<br;
return 0;
}
