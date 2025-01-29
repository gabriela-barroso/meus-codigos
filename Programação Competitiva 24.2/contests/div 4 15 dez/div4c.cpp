#include <bits/stdc++.h>

using namespace std;
 int main(){

    int t;
    cin>>t; 
    for (int i = 0; i<t; i++)
    {
        int m,a,b,c;
        cin>>m>>a>>b>>c;

        int resto1 = m-a;
        int resto2 = m-b;
        int sentados = 0;
        if (resto1<0)
        {
            resto1 = 0;
            sentados+=m;
        }
        else
        {
            sentados+=a;
        }

        if (resto2<0)
        {
            resto2 = 0;
            sentados+=m;

        }
        else
        {
            sentados+=b;
        }
        int resto_total = resto1+resto2;
        int resto3 = resto_total-c;
        if (resto3<0)
        {
            sentados+=resto_total;
        }
        else
        {
            sentados+=c;
        }
        cout<<sentados<<endl;
    }



    return 0;
 }