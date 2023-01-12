#include <iostream>
#include <string.h>
using namespace std;
struct model{
    int nomer;
    char ime[40];
    char cvqt[40];
    int duljina;
    int shirina;
    int edinichnaCena;
};
int main()
{
    model M[25];
    int broi;
    cout<<"Vuvedi broi modeli: ";
    cin>>broi;
    for(int i=0;i<broi;i++){
    M[i].nomer = i+1;
    cout<<M[i].nomer<<"\nIme: ";
    cin>>M[i].ime;
    cout<<"Cvqt: ";
    cin>>M[i].cvqt;
    cout<<"Duljina: ";
    cin>>M[i].duljina;
    cout<<"Shirina: ";
    cin>>M[i].shirina;
    cout<<"Edinichna Cena: ";
    cin>>M[i].edinichnaCena;
    }
    int x;
    int y;
    cout<<"\nVuvedi kolko prostranstvo e nujno v kv.m.\n";
    cin>>x;
    cout<<"Vuvedi sumata, koqto ne trqbwa da se nadhrurlq\n";
    cin>>y;
    
    cout<<"Varianti:\n";
    int Neobhodimi;
    for(int i=0;i<broi;i++){
        Neobhodimi = x/(M[i].duljina*M[i].shirina/10000);
        if(Neobhodimi * M[i].edinichnaCena<y) cout<<"Nomer: "<<M[i].nomer<<", cvqt: "<<M[i].cvqt<<", Stoinost:"<<Neobhodimi * M[i].edinichnaCena;
    }
    
    return 0; 
}