#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0; i<t; i++)
    {
        int n,sub;
        cin >> n;
        vector<int> numeros(n);
        vector<int> valores;

        for (int j=0; j<n; j++)
        {
            cin >> numeros[j];
        }

        sort(numeros.begin(),numeros.end());

        valores.clear();

        for (size_t k=0; k<numeros.size()-1; k++)
        {
            sub = abs(numeros[k]-numeros[k+1]);
            valores.push_back(sub);
        }
        
        sort(valores.begin(),valores.end());
        cout << valores[0] << endl;
        


    }






    return 0;
}