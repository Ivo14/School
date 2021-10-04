#include <iostream>
using namespace std;
int main () {
 int a, b, c;
 cin>>a;
 cin>>b;
 cin>>c;
 if (a==0) cout<<"Chislata sa\n"<<c-b<<"\n"<<b<<"\n"<<c;
 else if (b==0) cout<<"Chislata sa "<<a<<"\n"<<c-a<<"\n"<<c;
 else cout<<"Chislata sa "<<a<<"\n"<<b<<"\n"<<a+b;
return 0;
}