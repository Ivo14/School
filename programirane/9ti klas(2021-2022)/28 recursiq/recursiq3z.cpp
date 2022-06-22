#include <iostream>
using namespace std;
int rec(int a){
if(a<10) return 1;
else return 1+rec(a/10);
}
int main () {
while (true){
        int b;
        cin>>b;
    if(b<0) break;
else cout<<rec(b)<<"\n";
}
return 0;
}
