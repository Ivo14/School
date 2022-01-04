#include <iostream>
using namespace std;
int main () {
    int n,br,max;
    br=0;
    cout<<"Vuvedi broqt na uchenicite(<30)\n";
    cin>>n;
    if(n>29) cout<<"Trqbwa da sa po-malko ot 30\n";
    if(n<1) cout<<"Trqbwa da sa poveche\n";
    else if(n>1 and n<30) {
            int a[n];
cout<<"Vuvedi rustovete\n";
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    br=br+a[i];
}
cout<<"Sredniqt rust e "<<br/n<<"\n";
max=a[0];
for(int i=1;i<n;i++)
{
    if(max<a[i]) max=a[i];
}
cout<<"Nai-visok rust: "<<max;}
return 0;
}
