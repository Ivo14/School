#include <iostream>
using namespace std;
void number3di(int &a,int &b, int &c) {
int k;if (a<b){k=a;a=b;b=k;} if (b<c){k=b;b=c;c=k;}; if (a<c) {k=a;a=c;c=k;};if (a<b){k=a;a=b;b=k;};
cout<<a<<b<<c;}


int main () {
    int a,b,c,a1,b1,c1;
cout<<"Vuvedi chislata\n";
        cin>>a>>b>>c;
        if (a==b and b==c and c==0) cout<<"END";
        else {
number3di(a,b,c);
cout<<"\nVuvedi vtorite chisla\n";
        cin>>a1>>b1>>c1;
        if (a1==b1 and b1==c1 and c1==0) cout<<"END";
        else {number3di(a1,b1,c1);
int S,P,Max;
S=a*100+b*10+c+a1*100+b1*10+c1;
cout<<"\nsuma: "<<S;
P=(a*100+b*10+c)*(a1*100+b1*10+c1);
cout<<"\nProizvedenie: "<<P;
if(a*100+b*10+c>a1*100+b1*10+c1) Max=a*100+b*10+c;
else Max=a1*100+b1*10+c1;
cout<<"\nMax: "<<Max;}}
return 0;
}
