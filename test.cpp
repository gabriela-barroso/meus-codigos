#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Vetor auxiliar para marcar presença de valores
    vector<bool> presente(n + 1, false);

    // Marca os valores presentes no vetor
    for (int i = 0; i < n; i++) {
        if (v[i] >= 1 && v[i] <= n) {
            presente[v[i]] = true;
        }
    }

    // Conta os valores marcados como presentes
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (presente[i]) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
