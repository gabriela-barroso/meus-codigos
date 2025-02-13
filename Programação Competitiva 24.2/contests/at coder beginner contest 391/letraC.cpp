#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ff first
#define ss second
typedef long long ll;

int main() {
    fast_io
    int n,q,id,p,h,count,atual;
    cin >> n >> q;
    vector<int> ninho(n+1,1);
    vector<int> pombo(n+1,1);
    count = 0;
    for (int i = 1; i<=n;i++)
    {
        pombo[i] = i;
    }
    for (int i = 0; i<q; i++)
    {
        cin >> id;
        if (id==1)
        {
            cin >> p >> h;
            atual = pombo[p];
            ninho[atual] -=1;
            if (ninho[atual]==1)
            {
                count-=1;
            }
            pombo[p] = h;
            ninho[h]+=1;
            if (ninho[h]==2)
            {
                count+=1;
            }

        }
        else
        {
            cout << count << endl;
        }

    }

    return 0;
}