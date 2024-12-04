#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    
    for (int i=0; i<t; i++)
    {
        int comp1,comp2;
        comp1 = 0;
        comp2 = 0;
        string bilhete;
        cin >> bilhete;
        vector<int> v;
        for (char letra : bilhete)
        {
            int numero = letra - '0';
            v.push_back(numero);
        }
        for (int x=0; x<3; x++)
        {
            comp1+=v[x];
        }
        for (int x = v.size()-3; x < v.size(); x++)
        {
            comp2+=v[x];
        }

        if (comp1 == comp2)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
    }



    return 0;
}