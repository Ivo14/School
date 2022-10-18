#include <iostream>
#include<math.h>
using namespace std;
bool chetno(int x){
if(x%2==0) return true;
else return false;
}
int main () {
    int a,b;
cout<<"Vuvedi 2 chisla";
cin>>a>>b;
if (chetno(a+b)) cout<<"Sborut na dvete chisla e chetno\n";
else cout<<"Sborut na dvete chisla e nechetno\n";
if(chetno(a*b)) cout<<"Proizvedenieto na dvete chisla e chetno\n";
else cout<<"Proizvedenieto na dvete chisla e nechetno\n";
return 0;
}
