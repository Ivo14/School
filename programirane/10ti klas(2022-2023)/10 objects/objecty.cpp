#include <iostream>
#include <string.h>
using namespace std;
struct student {
int nomer;
char ime[40];
double rust;
double teglo;
char pol;
};
int main () {
student Student1{};
student Student2{};
student Student3{};
cout<<"Vuvedi nomerata\n";
cin>>Student1.nomer;
cin>>Student2.nomer;
cin>>Student3.nomer;
cout<<"Vuvedi imenata\n";
cin>>Student1.ime;
cin>>Student2.ime;
cin>>Student3.ime;
cout<<"Vuvedi rustovete\n";
cin>>Student1.rust;
cin>>Student2.rust;
cin>>Student3.rust;
cout<<"Vuvedi teglata\n";
cin>>Student1.teglo;
cin>>Student2.teglo;
cin>>Student3.teglo;
cout<<"Vuvedi polovete\n";
cin>>Student1.pol;
cin>>Student2.pol;
cin>>Student3.pol;


if(Student1.rust>=Student2.rust && Student1.rust>=Student3.rust) cout<<Student1.ime<<" "<<Student1.pol;
    else if(Student1.rust<=Student2.rust && Student2.rust>=Student3.rust)cout<<Student2.ime<<" "<<Student2.pol;
    else if(Student3.rust>=Student1.rust && Student3.rust>=Student2.rust)cout<<Student3.ime<<" "<<Student3.pol;
double srednoteglo=(Student1.teglo+Student2.teglo+Student3.teglo)/3;
cout<<"\nSredno teglo: "<<srednoteglo;
if(Student1.pol==Student2.pol && Student3.pol==Student1.pol) cout<<"\nOt ednakuv pol";
    else cout<<"\nOt razlichen";
}

