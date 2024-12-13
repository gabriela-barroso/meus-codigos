#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        int n,m;
        cin >> n >> m;
        int soma = 0, count = 0;
        for (int j=0; j<n; j++)
        {
            
            string palavra;
            cin >> palavra;
        
            int tamanho = palavra.size();

            if (soma+tamanho<=m)
            {
                soma+=tamanho;
                count++;
            }
            
            
            
            
        }
        cout << count << endl;
    }


    return 0;
}