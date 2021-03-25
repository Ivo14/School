#include <iostream>
using namespace std;

int main () {
int N, K, A, B, R;
cout<<"Vuvedi kolko kolcheta ima ";
cin>>N;
cout<<"Vuvedi kolko e visoko purvoto ";
cin>>A;
cout<<"Vuvedi kolko e visoko poslednoto ";
cin>>B;
cout<<"Vuvedi koe podred iskash da vidish kolko e visoko ";
R=(B-A)/(N-1);
cin>>K;
cout<<"Visochinata mu e "<<(K-1)*R+A;
return 0;
}
