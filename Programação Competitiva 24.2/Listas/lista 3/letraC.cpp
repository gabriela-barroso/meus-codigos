#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
typedef long long ll;

int main() {
    fast_io
    int n,q,t,l,r,x,k = 0;
    cin >> n >> q >> t;
    ll aux;
    vector<ll> delta(n+2,0), prefsum(n+1,0);

    while (q--)
    {
        cin >> l >> r >> x;
        delta[l]+=x;
        delta[r+1]-=x;

    }
    aux = 0;
    for (int i = 1; i<=n; i++)
    {
        aux = aux + delta[i];
        if (aux>=t)
        {
            k++;
        }
    }
    cout << k << endl;


    return 0;
}