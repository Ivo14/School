#include <iostream>
using namespace std;
int main () {
  int N[150];
  int chisla; int sbor=0; int pro=1;
  cout<<"broi chisla ";
  cin>>chisla;
  for(int i =0;i<chisla;i++){
  cin>>N[i];}
  for(int i =0;i<chisla;i++){
  sbor=sbor+N[i];
  pro=pro*N[i];
  }
   for(int i=chisla-1;i>=0;i--){
        cout<<N[i]<<" ";
  }
  cout<< "\n sbor= "<<sbor<< "\n proizvedenie = "<<pro;
}

