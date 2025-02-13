#include <bits/stdc++.h>
using namespace std;

int bfs(int n, int m) {
    // Fila de pares (número atual, número de operações)
    queue<pair<int, int>> q;
    // Conjunto para armazenar números já visitados
    set<int> visited;

    // Inicia a fila com o número n e 0 operações
    q.push({n, 0});
    visited.insert(n);

    while (!q.empty()) {
        int curr = q.front().first;  // Número atual
        int steps = q.front().second;  // Número de operações
        q.pop();

        // Se chegamos ao número m, retornamos o número de operações
        if (curr == m) {
            return steps;
        }

        // Operação 1: Multiplicar por 2
        if (curr * 2 <= 2 * m && visited.find(curr * 2) == visited.end()) {
            q.push({curr * 2, steps + 1});
            visited.insert(curr * 2);
        }

        // Operação 2: Subtrair 1
        if (curr - 1 > 0 && visited.find(curr - 1) == visited.end()) {
            q.push({curr - 1, steps + 1});
            visited.insert(curr - 1);
        }
    }

    return -1;  // Se não encontrar (não vai acontecer com números positivos)
}

int main() {
    int n, m;
    cin >> n >> m;
    
    // Chama o BFS para encontrar o número mínimo de operações
    cout << bfs(n, m) << "\n";
    
    return 0;
}
