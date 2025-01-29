#include <bits/stdc++.h>

using namespace std;
 int main(){

    int n,f,p,numero,x,tempo = 0;
    cin >>n >> f >> p;
    queue<int> fila;
    for (int k=0; k<n; k++)
    {
        cin >> numero;
        fila.push(numero);
    }
    x = f;
    while (!fila.empty()) 
    {
        if (x==f)
        {
            int cam = fila.front();
            if (cam<=p)
            {
                tempo+=5;
            }
            else
            {
                tempo+=10;
                cam = cam-2;
                fila.push(cam);
            }
            x = 1;
        }
        else
        {
            tempo++;
            x++;
        }
        fila.pop();
        
    }   

    cout << tempo;

    return 0;
}


