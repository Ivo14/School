#include <iostream>
using namespace std;
int main () {
double x;
cout<<"Vuvedi chisloto\n";
cin>>x;
{
    if (x>0)
        cout<<"positive";
        else if(x==0)
            cout<<"zero";
    else
        cout<<"negative";
}
return 0;
}

//По въведено число да се извежда подходящо съобщение „positive“, „negative“ или „zero“ (положително, отрицателно или нула)
