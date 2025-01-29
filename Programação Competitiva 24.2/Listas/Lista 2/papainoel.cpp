#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,x;
    string c;
    stack<int> pilha,pesados;
    cin >> n;
    for (int i = 0; i<n; i++)
    {
        cin >> c >> x;
        if (c=="A")
        {
            pilha.push(x);
            if (pesados.empty())
            {
                pesados.push(x);
            }
            else if (x>=pesados.top())
            {
                pesados.push(x);
            }
        }

        else if (c=="V")
        {
            if (!pesados.empty())
            {
                cout << pesados.top() << endl;
            }
            else
            {
                cout << "0" << endl;
            }
            
        }
 
        else
        {
            if (!pilha.empty() and pilha.top() == pesados.top())
            {
                pesados.pop();
            }
            pilha.pop();
        }

    }
    
    
    
    
    return 0;
}
