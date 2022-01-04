#include <iostream>
#include <math.h>
using namespace std;
int main () {
int a; 
int br=0;
do{
    cin>>a;
    if (a%9==0) br=br+1;
} 
while (a<9999 or a>99999);
cout<<"broi: "<<br;
}