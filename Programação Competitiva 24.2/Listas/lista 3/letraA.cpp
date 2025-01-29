#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
typedef long long ll;

int main() {
    fast_io
    int n,q,a,l,r;
    cin >> n >> q;
    vector<int> vetor;
    vetor.pb(0);
    for (int i = 0; i<n; i++)
    {
        cin >> a;
        vetor.pb(a);
    }

    vector<ll> psum(n+1,0);
    for (int i = 1; i<=n; i++)
    {
        psum[i] = vetor[i]+ psum[i-1];
    }
    


    for (int i = 0; i<q; i++)
    {
        cin >> l >> r;
        ll ans = psum[r] - psum[l-1];

        cout<<ans<<endl;
    }
    return 0;
}