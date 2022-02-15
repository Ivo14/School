#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int S=0;
int A[3][4];
for (int i=0;i<3;i++)
    for (int j=0;j<4;j++)
    {
        cout<<"A["<<i<<"]["<<j<<"]=";
cin>>A[i][j];
    }
for (int i=0;i<3;i++)
{
 for (int j=0;j<4;j++)
cout<<A[i][j]<<setw(5);
cout<<"\n";
}
for (int i=0;i<3;i++)
    for (int j=0;j<4;j++)
S=S+A[i][j];
cout<<"sumata na vsichki elementi ot masiva e: "<<S;
return 0;
}
