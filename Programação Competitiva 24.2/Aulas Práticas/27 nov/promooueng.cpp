#include <bits/stdc++.h>
using namespace std;

int main(){

    int N,R,M,P;
    double valor1,valor2;
    cin >> N >> R;
    cin >> M >> P;
    valor1 = (double)R/N;
    valor2 = (double)P/M;
    if (valor1>valor2)
    {
        cout << "Promocao" << endl;
    }
    else
    {
        cout << "Enganacao" << endl;
    }




    return 0;
}