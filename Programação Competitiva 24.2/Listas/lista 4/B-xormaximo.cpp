#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long ll;

bool isset(ll num, ll bitpos)
{
    return (num & (1ll << bitpos)) !=0;
}

ll setbit(ll num, ll bitpos)
{
    return (num | (1ll << bitpos));
}

ll clearbit(ll num, ll bitpos)
{
    return num & ~(1ll << bitpos);
}
int main() {
    fast_io
    ll n, b;
    cin >> n;
    b = n;
    for (ll i = 63; i>=0; i--)
    {
        if (isset(n,i))
        {
            for (; i>=0; i--)
            {
               if (isset(n,i))
               {
                b = clearbit(b,i);
               }
               else
               {
                b = setbit(b,i);
               }
            }
            break;
        }
    }
    cout << n << " " << b << '\n';
    return 0;
}