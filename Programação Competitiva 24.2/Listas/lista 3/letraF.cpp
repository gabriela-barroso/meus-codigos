#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
typedef long long ll;

int main() {
    fast_io;
    int n, m, aux, l, r, a;
    cin >> n >> m;
    
    ll sum = 0, sum2 = 0, ans = 0;

    vector<ll> p(n+1, 0), delta(n+2, 0), prefsum(n+1, 0), prefsum2(n+1, 0), operations(n+2, 0);

    // Lendo os valores e armazenando invertidos
    for (int i = 1; i <= n; i++) {
        cin >> aux;
        p[i] = -aux;
    }

    // Aplicando as operações de diferença
    for (int i = 0; i < m; i++) {
        cin >> l >> r >> a;
        delta[l] += a;
        delta[r+1] -= a;

        operations[l] += 1;
        operations[r+1] -= 1;
    }

    // Processando prefix sums e calculando ans
    for (int i = 1; i <= n; i++) {
        sum += delta[i];
        prefsum[i] = p[i] + sum;

        sum2 += operations[i];
        prefsum2[i] = sum2;

        // Se prefsum[i] for negativo e prefsum2[i] positivo, somamos a ans
        if (prefsum[i] < 0 && prefsum2[i] > 0) {
            ans += prefsum2[i];
        }
    }
    
    cout << ans << endl;
    return 0;
}
