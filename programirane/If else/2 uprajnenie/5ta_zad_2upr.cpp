#include <iostream>
using namespace std;
int main () {
double x,y,a;
cout<<"Vuvedi trite chisla\n";
cin>>x;
cin>>y;
cin>>a;
        if (x==y and y==a)
        cout<<x<<"="<<y<<"="<<a;
        else if (x>y and y>a)
        cout<<x<<">"<<y<<">"<<a;
        else if (x<y and y<a)
        cout<<x<<"<"<<y<<"<"<<a;
        else if (x==y and y>a)
        cout<<x<<"="<<y<<">"<<a;
        else if (x==y and y<a)
        cout<<x<<"="<<y<<"<"<<a;
        else if (x>y and y<a)
        cout<<x<<">"<<y<<"<"<<a;
        else if (x>y and y==a)
        cout<<x<<">"<<y<<"="<<a;
        else if (x<y and y==a)
        cout<<x<<"<"<<y<<"="<<a;
        else if (x<y and y>a)
        cout<<x<<"<"<<y<<">"<<a;
return 0;
}

