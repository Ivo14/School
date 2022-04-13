#include <iostream>
using namespace std;
bool chetno (int x) {
if(x%2==0)return true;
else return false;
}

int main () {
int purvo;
int vtoro;
cout<<"Vuvedi chislata\n";
cin>>purvo;
cin>>vtoro;
int proiz=purvo*vtoro;
int sbor=purvo+vtoro;
cout<<"Sbor: "<<chetno(sbor)<<"\n";
cout<<"Proizvedenie: "<<chetno(proiz)<<"\n";
}
