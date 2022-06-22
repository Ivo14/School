#include <iostream>
using namespace std;
int rec(int a0, int n, int d){
if(n==0) return a0;
else return d+rec(a0,n-1,d);
}
int main () {
    int ao,nn,dd,an;
    cin>>ao>>nn>>dd;
    an=rec(ao,nn,dd);
    cout<<an;
return 0;
}
