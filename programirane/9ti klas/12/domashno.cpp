#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main () {
int n;
cout<<"broi chisla v masiva:";
cin>>n;
if(n>10) cout<<"Broqt trqbwa da e pod 11";
else {
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];}
    cout<<"Chislata v masiva sa: \n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    int min=a[0];
    for(int i=1;i<n;i++){
    if(min>a[i]) min=a[i];}
    int max=a[0];
    for(int i=1;i<n;i++){
    if(max<a[i]) max=a[i];}
cout<<"\nNai-malkoto chislo ot masiva e: "<<min;
cout<<"\nNai-golqmoto chislo ot masiva e: "<<max;
sort(a,a+n);
cout<<"\nVuzhodqsht red: ";
for (int i = 0;i<n;i++){
cout<<a[i] << " ";}
for(int i=0;i<n;i++)
	{		
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int temp  =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"\nNizhodqsht red:";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
return 0;
}