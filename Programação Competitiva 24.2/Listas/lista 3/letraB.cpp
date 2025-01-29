#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
typedef long long ll;

int main() {
    fast_io
    int n,q,l,r,x;
    ll aux;
    cin >> n >> q;

    vector<ll> d(n+2,0), prefsum(n+1,0);

    for (int i = 0; i<q; i++)
    {
        cin >> l >> r >> x;
        d[l]+=x;
        d[r+1]-=x;
    }
    aux = 0;
    for (int i = 1; i<=n; i++)
    {
        aux = aux + d[i];
        prefsum[i] = aux;
        cout<< prefsum[i] << " ";
    }
    
    return 0;
}