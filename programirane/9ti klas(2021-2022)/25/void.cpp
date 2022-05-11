#include <iostream>
using namespace std;
int nod(int a,int b){
  if (b == 0)
     return a;
  else
     return nod(b,a%b);}

     int nok(int a,int b){return (a*b)/(nod(a,b));}
int main () {
int x,y;
cin>>x>>y;
cout<<nod(x,y)<<"\n";
cout<<nok(x,y);

return 0;
}
