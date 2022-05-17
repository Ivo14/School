#include <iostream>
using namespace std;

void read_arr(int A[],int N)
{for (int i=0;i<N;i++)
cin>>A[i];
}

void write_arr(int A[],int N) {
    for (int i=0;i<N;i++)
if(i!=N-1) cout<<A[i]<<", ";
else cout<<A[i];}


int sum_arr(int A[],int N) {
int S=0;
for(int i=0;i<N;i++){
  S=A[i]+S;
}
return S;
}


int min_arr(int A[],int N)
{
    int min=A[0];
    for(int i=0;i<N;i++){
    if(A[i]<min) min=A[i];}
    return min;
}



int max_arr(int A[],int N) {
    int max=A[0];
    for(int i=0;i<N;i++){
    if(A[i]>max) max=A[i];}
    return max;
}


int pro_arr(int A[], int N) {
int P=1;
for(int i=0;i<N;i++){
  P=A[i]*P;}
  return P;

}

int main () {
int N;
cin>>N;
int A[100];
read_arr(A,N);
write_arr(A,N);
cout<<"\n"<<sum_arr(A,N);
cout<<"\n"<<min_arr(A,N);
cout<<"\n"<<max_arr(A,N);
cout<<"\n"<<pro_arr(A,N);
return 0;
}
