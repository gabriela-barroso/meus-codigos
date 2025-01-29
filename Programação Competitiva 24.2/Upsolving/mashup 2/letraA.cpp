#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back


int main() {
    fast_io
    int t,n,numeros;
    cin >> t;
    for (int i = 0; i<t; i++)
    {
        cin >> n;
        vector<int> vetor;
        for (int j = 0; j<(n*2); j++)
        {
            cin >> numeros;
            vetor.pb(numeros);
        }
        int countpar = 0, countimpar = 0;
        for (int num : vetor)
        {
            if (num%2 == 0)
            {
                countpar+=1;
            }
            else
            {
                countimpar+=1;
            }
        }
        
        if (countpar==countimpar)
        {
            cout<< "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    
    
    return 0;
}