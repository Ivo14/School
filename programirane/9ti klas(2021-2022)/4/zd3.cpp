#include <iostream>
using namespace std;
int main () {
int hlqb, cena,br,st;
br=0;
st=0;
cout<<"Vuvedi broqt na hlqbove ot vida i posle edinichnata cena\n";
for (int i=1;i<11;i++){
    cin>>hlqb;
    cin>>cena;
    br=br+hlqb;
    st=st+(cena*hlqb);
}
cout<<"Broi hlqbove:"<<br<<"\n";
cout<<"Obsta cena:"<<st<<"\n";
return 0;
}

