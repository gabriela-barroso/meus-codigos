#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


int main() {
    fast_io
    int a,b,ans;
    cin >> a >> b;
    ans = a^b;
    cout << ans << endl;
    return 0;
}