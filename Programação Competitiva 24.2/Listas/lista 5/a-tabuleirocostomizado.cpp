#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int n,m;
    string aux;
    vector<string> linha;
    cin >> n >> m;
    for (int i = 0; i<n; i++)
    {
        cin >> aux;
        linha.pb(aux);
    }
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            if (linha[i][j] == '.')
            {
                if ((i+j)%2 == 0)
                {
                    linha[i][j] = 'B';
                }
                else
                {
                    linha[i][j] = 'W';
                }
            }
        }
    }
    for (string letra : linha)
    {
        cout << letra << "\n";
    }
    return 0;
}