#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int positive=0;
    int P=1;
    int S=0;
    int B[841];
    int C[841];
int A[3][5];
for (int i=0;i<3;i++)
    for (int j=0;j<5;j++)
    {
        cout<<"A["<<i<<"]["<<j<<"]=";
        cin>>A[i][j];
    }

for (int i=0;i<3;i++)
{
   for (int j=0;j<5;j++)
cout<<A[i][j]<<setw(5);
 cout<<"\n";
}

    for (int i=0;i<3;i++)
    for (int j=0;j<5;j++)
        S=S+A[i][j];

    for (int i=0;i<3;i++)
    for (int j=0;j<5;j++)
        P=P*A[i][j];
        cout<<"Proizvedenie: "<<P<<"\n";
        cout<<"Suma na vsichki chisla ot masiva: "<<S<<"\n";



        for (int i=0;i<3;i++){
            int Sum=0;
        for (int j=0;j<5;j++)
            Sum=Sum+A[i][j];
        B[i]=Sum;}
        for (int i=0;i<3;i++)
            cout<<"Sumata na red "<<i<<": "<<B[i]<<"\n";




        for (int j=0;j<5;j++){
            int Sum=0;
        for (int i=0;i<3;i++)
            Sum=Sum+A[i][j];
        B[j]=Sum;}
        for (int i=0;i<5;i++)
            cout<<"Sumata na kolona "<<i<<": "<<B[i]<<"\n";


    for (int i=0;i<3;i++)
    for (int j=0;j<5;j++)
    if(A[i][j]>0) positive=positive+1;
    cout<<"Broqt na polojitelnite chisla: "<<positive;
return 0;
}



