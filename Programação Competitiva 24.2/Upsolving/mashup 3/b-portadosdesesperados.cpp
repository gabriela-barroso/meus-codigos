#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fast_io
    int c,aux,sum = 100,ans = 100;
    cin >> c;
    for (int i = 0; i<c; i++)
    {
        cin >> aux;
        sum += aux;
        if (sum>ans)
        {
            ans = sum;
        } 
    }
    cout << ans << "\n";
    return 0;
}