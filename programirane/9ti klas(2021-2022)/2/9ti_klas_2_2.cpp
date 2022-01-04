#include <iostream>
#include <algorithm>
using namespace std;
int main () {
int a, e, e1, e2, e3, i, i1, i2, i3, edinici, desetici, stotici, hilqdi, desetohilqdi;
cout<<"Vuvedi pet cifrenoto chislo\n";

cin>>a;

if (a<10000 or a>99999) cout<<"Ne e vuvedeno pet cifreno chislo";
else cout<<"Vuvedeno e chisloto "<<a<<"\n";

edinici=a%10;
desetici=(a%100-a%10)/10;
stotici=(a%1000-(a%100-a%10))/100;
hilqdi=(a%10000-(a%1000-a%100-a%10))/1000;
desetohilqdi=(a%1000000-(a%10000-a%1000-a%100-a%10))/10000;

e=max(edinici, desetici);
e1=max(stotici, hilqdi);
e2=max(e, e1);
e3=max(e2, desetohilqdi);
i=min(edinici, desetici);
i1=min(stotici, hilqdi);
i2=min(i, i1);
i3=min(i2, desetohilqdi);
cout<<"\nRazlikata na nai-golqmata cifra i nai-malkata e "<<e3-i3;
if (desetohilqdi+hilqdi==desetici+edinici) cout<<"\nYES";
else cout<<"\nNO";
cout<<"\n"<<a<<"="<<desetohilqdi<<"*10000+"<<hilqdi<<"*1000+"<<stotici<<"*100+"<<desetici<<"*10+"<<edinici<<"*1";
return 0;
}