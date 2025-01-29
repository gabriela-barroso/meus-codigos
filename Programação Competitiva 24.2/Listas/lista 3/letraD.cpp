#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
typedef long long ll;

int main() {
    fast_io
    int n,m,c,aux,aux2,etapas,ans;
    cin >> n >> m >> c;
    vector<ll> a;
    vector<ll>  delta(n+2,0);
    ll s;
    etapas = (n-m)+1;
    a.pb(0);
    for (int i = 1; i<=n; i++)
    {
        cin >> aux;
        a.pb(aux);

    }
    for (int i = 1; i<=m; i++)
    {
        cin >> aux2;
        delta[i]+=aux2;
        delta[i+etapas]-=aux2;
    }
    s = 0;
    for (int i = 1; i<=n; i++)
    {
        s = s + delta[i];
        ans = (a[i]+s)%c;
        cout << ans << " ";
    }
    cout<< endl;

    return 0;
}