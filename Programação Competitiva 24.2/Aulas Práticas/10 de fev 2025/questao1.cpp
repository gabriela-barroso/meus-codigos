#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back

typedef long long ll;

int main() {
    fast_io
    int t;
    cin >> t;
    for (int i = 0; i<t; i++)
    {
        int n,q,num;
        cin >> n >> q;
        vector<ll> psum(n+1,0);
        vector<int> a;
        
        for (int i = 0; i<n; i++)
        {
            cin >> num;
            a.pb(num);
        }
        sort(a.begin(),a.end(),greater<int>());

        for (int i = 1; i<=n; i++)
        {
            psum[i] = a[i-1] + psum[i-1];
        }
        

        while (q--)
        {
            cin >> num;
            if (lower_bound(psum.begin(),psum.end(),num) == psum.end())
            {
                cout << "-1" << "\n";
            }
            else
            {
                cout << (lower_bound(psum.begin(),psum.end(),num) - psum.begin()) << "\n";
            }

        }

    }
    
    return 0;
}