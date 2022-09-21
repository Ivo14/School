#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int Engine (int a1, int a2,int a3,int b1,int b2,int b3,int c1,int c2,int c3) {
if (a1==2 && a2==2 && a3==0) return 3;
else if (a1==2 && a3==2 && a2==0) return 2;
else if (a2==2 && a3==2 && a1==0) return 1;

else if (b1==2 && b2==2 && b3==0) return 6;
else if (b1==2 && b3==2 && b2==0) return 5;
else if (b3==2 && b2==2 && b1==0) return 4;

else if (c1==2 && c2==2 && c3==0) return 9;
else if (c1==2 && c3==2 && c2==0) return 8;
else if (c3==2 && c2==2 && c1==0) return 7;

else if (a1==2 && b1==2 && c1==0) return 7;
else if (a1==2 && c1==2 && b1==0) return 4;
else if (c1==2 && b1==2 && a1==0) return 1;

else if (a1==2 && b2==2 && c3==0) return 9;
else if (a1==2 && c3==2 && b2==0) return 4;
else if (c3==2 && b2==2 && a1==0) return 1;

else if (a3==2 && b2==2 && c1==0) return 7;
else if (a3==2 && c1==2 && b2==0) return 5;
else if (c1==2 && b2==2 && a3==0) return 3;

else if (a2==2 && b2==2 && c2==0) return 8;
else if (a2==2 && c2==2 && b2==0) return 5;
else if (c2==2 && b2==2 && a2==0) return 2;

else if (a3==2 && b3==2 && c3==0) return 9;
else if (a3==2 && c3==2 && b3==0) return 6;
else if (c3==2 && b3==2 && a3==0) return 3;

else if (a1==1 && a2==1 && a3==0) return 3;
else if (a1==1 && a3==1 && a2==0) return 2;
else if (a3==1 && a2==1 && a1==0) return 1;

else if (b1==1 && b2==1 && b3==0) return 6;
else if (b1==1 && b3==1 && b2==0) return 5;
else if (b3==1 && b2==1 && b1==0) return 4;

else if (c1==1 && c2==1 && c3==0) return 9;
else if (c1==1 && c3==1 && c2==0) return 8;
else if (c3==1 && c2==1 && c1==0) return 7;

else if (a1==1 && b1==1 && c1==0) return 7;
else if (a1==1 && c1==1 && b1==0) return 4;
else if (c1==1 && b1==1 && a1==0) return 1;

else if (a1==1 && b2==1 && c3==0) return 9;
else if (a1==1 && c3==1 && b2==0) return 5;
else if (c3==1 && b2==1 && a1==0) return 1;

else if (a3==1 && b2==1 && c1==0) return 7;
else if (a3==1 && c1==1 && b2==0) return 5;
else if (c1==1 && b2==1 && a3==0) return 3;

else if (a2==1 && b2==1 && c2==0) return 8;
else if (a2==1 && c2==1 && b2==0) return 5;
else if (c2==1 && b2==1 && a2==0) return 2;

else if (a3==1 && b3==1 && c3==0) return 9;
else if (a3==1 && c3==1 && b3==0) return 6;
else if (c3==1 && b3==1 && a3==0) return 3;

else if(b2==1 && a1==0 && a2==0 && a3==0 && b1==0 && b3==0 && c1==0 && c2==0 && c3==0) return 1;
else if(b2==1 && a1==2 && a2==0 && a3==0 && b1==0 && b3==0 && c1==0 && c2==0 && c3==1) return 3;
else if(b2==2 && a1==1 && a2==0 && a3==0 && b1==0 && b3==0 && c1==0 && c2==0 && c3==1) return 4;
else if(b2==2 && a1==0 && a2==0 && a3==1 && b1==0 && b3==0 && c1==1 && c2==0 && c3==0) return 6;

else if (b2==0) return 5;
else if (a1==0) return 1;
else if (c3==0) return 9;
else if (c1==0) return 7;
else if (a3==0) return 3;
else if (a2==0) return 2;
else if (c2==0) return 8;
else if (b1==0) return 4;
else if (b3==0) return 6;
}

string Check1(int a1, int b1, int c1,int a2,int b2,int c2,int a3,int b3,int c3) {
if (a1==1 && a2==1 && a3==1) return "1 won";
else if (b1==1 && b2==1 && b3==1) return "1 won";
else if (c1==1 && c2==1 && c3==1) return "1 won";
else if (a1==1 && b1==1 && c1==1) return "1 won";
else if (a1==1 && b2==1 && c3==1) return "1 won";
else if (a3==1 && b2==1 && c1==1) return "1 won";
else if (a2==1 && b2==1 && c2==1) return "1 won";
else if (a3==1 && b3==1 && c3==1) return "1 won";
else return "-";
}
string Check2(int a1, int b1,int c1,int a2,int b2,int c2,int a3,int b3,int c3) {
if (a1==2 && a2==2 && a3==2) return "2 won";
else if (b1==2 && b2==2 && b3==2) return "2 won";
else if (c1==2 && c2==2 && c3==2) return "2 won";
else if (a1==2 && b1==2 && c1==2) return "2 won";
else if (a1==2 && b2==2 && c3==2) return "2 won";
else if (a3==2 && b2==2 && c1==2) return "2 won";
else if (a2==2 && b2==2 && c2==2) return "2 won";
else if (a3==2 && b3==2 && c3==2) return "2 won";
else return "-";
}
string CheckDraw(int a1, int b1,int c1,int a2,int b2,int c2,int a3,int b3,int c3){
if(a1!=0 and a2!=0 and a3!=0 and b1!=0 and b2!=0 and b3!=0 and c1!=0 and c2!=0 and c3!=0) return "Draw";
else return "-";
}
int main () {
int a[9];
int choose;
for(int i=0;i<9;i++)
{
    a[i]=0;
}

cout<<"Starting game\n";

while (1==1){
cin>>choose;
if(a[choose-1]==0) a[choose-1]=1;
else {cout<<"Zaeto";break;}
cout<<a[0]<<setw(2)<<a[1]<<setw(2)<<a[2]<<"\n"<<a[3]<<setw(2)<<a[4]<<setw(2)<<a[5]<<"\n"<<a[6]<<setw(2)<<a[7]<<setw(2)<<a[8]<<"\n";

if(Check1(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8])=="1 won") {cout<<Check1(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);break;}
if(CheckDraw(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8])=="Draw") {cout<<CheckDraw(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);break;}


choose=Engine(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);



if(a[choose-1]==0) a[choose-1]=2;
else {cout<<"Zaeto";break;}
cout<<a[0]<<setw(2)<<a[1]<<setw(2)<<a[2]<<"\n"<<a[3]<<setw(2)<<a[4]<<setw(2)<<a[5]<<"\n"<<a[6]<<setw(2)<<a[7]<<setw(2)<<a[8]<<"\n";
if(Check2(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8])=="2 won") {cout<<Check2(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);break;}
}
    return 0;
}