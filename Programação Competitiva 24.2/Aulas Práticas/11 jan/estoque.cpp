#include <bits/stdc++.h>

using namespace std;

int main() {

    int q, t, m;
    cin>>q;
    set<int> estoque;
    for (int i=0; i<q; i++)
    {
        cin >> t >> m;
        if (t==1)
        {
            estoque.insert(m);
        }
        else
        {
            if (estoque.find(m) == estoque.end())
            {
                cout << "Nao" << endl;
            }
            else
            {
                cout << "Sim" << endl;
            }
        }

    }

    return 0;
}