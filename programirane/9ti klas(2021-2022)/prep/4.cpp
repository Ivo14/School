#include <iostream>
using namespace std;
int main () {
int a[5]{1,6,9,10,12};
int b[6]{3,4,5,6,8,13};
int c[11];
int p1=0;
int p2=0;
int p3=-1;
while (p1<=4&&p2<=5) 
    if(a[p1]<=b[p2]) {
        p3++;
        c[p3]=a[p1];
        p1++;
    }
else {
p3++;c[p3]=b[p2];p2++;
}
if(p1>4)
for (int i=p2;i<6;i++)
{
    p3++; c[p3]=b[i];
}
else {
    for(int i=p1;i<5;i++){
    p3++;c[p3]=b[i];}
}

for (int i=0;i<11;i++)
{
    cout<<c[i]<<" ";
}
    return 0;
}