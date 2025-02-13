#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef pair<int,int> pii;

int bfs(int origem, int objetivo)
{
    int atual,passos;
    queue<pii> fila;
    set<int> visitados;

    fila.push(make_pair(origem,0));
    visitados.insert(origem);

    while (!fila.empty())
    {
        tie(atual,passos) = fila.front();
        fila.pop();
        if (atual == objetivo)
        {
            return passos;
        }
        if ((atual*2) <= 10000 and visitados.find(atual*2) == visitados.end())
        {
            fila.push(make_pair(atual*2,passos+1));
            visitados.insert(atual*2);
        }

        if ((atual-1)>0 and visitados.find(atual-1) == visitados.end())
        {
            fila.push(make_pair(atual-1,passos+1));
            visitados.insert(atual-1);
        }
    }
    return -1;
}
int main() {
    fast_io
    int n,m;
    cin >> n >> m;
    int ans = bfs(n,m);
    cout << ans << "\n";
    
    return 0;
}