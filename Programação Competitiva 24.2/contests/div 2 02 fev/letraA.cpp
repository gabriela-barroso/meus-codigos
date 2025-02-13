#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back


int main() {
    fast_io
    int t,n,aux;
    cin >> t;
    set<int> a;
    set<int> b;
    for (int i = 0; i<t; i++)
    {
        cin >> n;
        set<int> a;
        set<int> b;
        for (int i = 0; i<n; i++)
        {
            cin >> aux;
            a.insert(aux);
        }
        for (int i = 0; i<n; i++)
        {
            cin >> aux;
            b.insert(aux);
        }
        bool ans = false;
        set <int> soma;
    
        if (a.size()>=3 or b.size()>=3)
        {
            ans = true;
        }
    
        else
        {
            for (int x : a)
            {
                for (int y : b)
                {
                    soma.insert(x+y);
                }
            
            }
            if (soma.size()>=3)
            {
                ans = true;
            }
        }

        if (ans == true)
        {
            cout << "Yes" << endl;
        }
        else 
        {
            cout << "No" << endl;
        }

    }
    return 0;
}