#include <iostream>
using namespace std;
int main () {
char n;
cin>>n;
switch (n)
{
case 'L': cout<<"Load"; break;
case 'S': cout<<"Save"; break;
case 'E': cout<<"Enter"; break;
case 'D': cout<<"Display"; break;
case 'Q': cout<<"Quit"; break;
default: cout<<"error";
}
return 0;
}
