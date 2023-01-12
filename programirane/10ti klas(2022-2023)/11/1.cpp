#include <iostream>
#include <string.h>
using namespace std;
struct book{
    int nomer;
    char avtor[40];
    char zaglavie[40];
    int nalichnost;
};
int main()
{
    book B[3];
    for (int i=0;i<3;i++){
        cout<<"nomer: ";
        cin>>B[i].nomer;
        cout<<"avtor: ";
        cin>>B[i].avtor;
        cout<<"zaglavie: ";
        cin>>B[i].zaglavie;
        cout<<"nalichnost: ";
        cin>>B[i].nalichnost;
    }
    char Author[40];
    cout<<"Vuvedi Avtora, na koito iskash da vidish knigite: ";
     
    cin>>Author;
    for(int i=0;i<3;i++){
         if(strcmp(Author,B[i].avtor)==0)cout<<B[i].zaglavie;
    }
    cout<<"Vuvedi zaglavie: ";
    char z[40];
    cin>>z;
    cout<<"Vuvedi avtor: ";
    char a[40];
    cin>>a;
        for(int i=0;i<3;i++){
         if(strcmp(a,B[i].avtor)==0 && strcmp(z,B[i].zaglavie)==0) cout<<"Nalichnost:"<<B[i].nalichnost;
    }
    
    cout<<"\nVuvedi zaglavie: ";
    char za[40];
    cin>>za;
    cout<<"Vuvedi avtor: ";
    char av[40];
    cin>>av;
    cout<<"Nomera, koito ne sa nalichni: ";
        for(int i=0;i<3;i++){
         if(strcmp(a,B[i].avtor)==0 && strcmp(z,B[i].zaglavie)==0 && B[i].nalichnost==0) cout<<B[i].nomer<<" ";
    }
    
    return 0;
}