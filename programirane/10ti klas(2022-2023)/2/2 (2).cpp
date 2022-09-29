#include <iostream>
using namespace std;
int main () {
    int m,n;
 int M[10][10];
cout<<"Vuvedi m i n\n";
cin>>m;
cin>>n;
cout<<"Vuvedi stoinostite v masiva\n";
for(int i=0;i<m;i++){
    for(int h=0;h<n;h++)cin>>M[i][h];
}
for(int i=0;i<m;i++){
    for(int h=0;h<n;h++)cout<<M[i][h]<<" ";
    cout<<"\n";
}
int x;
cout<<"Vuvedi x";
cin>>x;
    for(int h=0;h<n;h++)cout<<M[x][h]<<"  ";

return 0;
}

