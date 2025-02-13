#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fast_io
    int n,k,aux,posicao,primeiro,removido;
    cin >> n >> k;
    queue<int> operations;
    vector<int> pessoas;
    for (int i = 0; i<k; i++)
    {
        cin >> aux;
        operations.push(aux);
    }
    for (int i = 1; i<=n; i++)
    {
        pessoas.push_back(i);
    }
    posicao = 0;

    while (!operations.empty())
    {
        primeiro = operations.front();

        if (posicao+primeiro>=n)
        {
            removido = (posicao+primeiro)%n;
        }
        else
        {
            removido = primeiro+posicao;
        }

        if (removido == n-1)
        {
            posicao = 0;
        }
        else  
        {
            posicao = removido;
        }
        cout << pessoas[removido] << " ";
        pessoas.erase(pessoas.begin()+removido);

        operations.pop();
        n-=1;
    }
    cout << endl;
    return 0;
}