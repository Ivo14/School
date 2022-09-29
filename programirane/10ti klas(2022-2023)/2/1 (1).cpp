#include <iostream>
using namespace std;
int main () {
    int n;
 int N[10][10];
cout<<"Vuvedi N\n";
cin>>n;
for(int i=0;i<n;i++){
    for(int h=0;h<n;h++)cin>>N[i][h];
}
for(int i=0;i<n;i++){
    for(int h=0;h<n;h++)cout<<N[i][h]<<"   ";
    cout<<"\n";
}
int max=N[0][0]; int q=0;int w=0;
for(int i=0;i<n;i++){
    for(int h=0;h<n;h++) {if(max<N[i][h]) {max=N[i][h]; q=i; w=h;}
}}
cout<<"Nai-golqmata stoinost v masiva e "<<max<<" na mqsto ["<<q<<"]["<<w<<"]";

return 0;
}
