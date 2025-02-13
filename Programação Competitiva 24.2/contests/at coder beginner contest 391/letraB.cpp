#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back

typedef long long ll;

int main() {
    fast_io
    int n,m,aux;
    cin >> n >> m;
    vector<string> s(n), t(m);
    for (int i = 0; i<n; i++)
    {
        cin >> aux;
        s[i] = aux;
    }
    for (int i = 0; i<m; i++)
    {
        cin >> aux;
        t[i] = aux;
    }

    for (int a = 0; a<=n-m; a++)
    {
        for (int b = 0; b<=n-m; b++)
        {
            bool encontrado = true;
    
        for (int i = 0; i<m; i++)
        {
            for (int j = 0; j<m; i++)
            {
                if (s[a+i][b+j]!=t[i]t[j])
                {
                    encontrado = false;
                }
            }
        }
        }
    }
    return 0;
}