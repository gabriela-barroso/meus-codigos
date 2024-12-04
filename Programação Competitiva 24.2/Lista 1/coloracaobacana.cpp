#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        int caracteres,resto,k;
        string palavra, resultado;
        cin >> palavra;
        std::sort(palavra.begin(), palavra.end());
        int contador = 1;

        for (size_t x = 1; x<=palavra.size(); x++)
        {
            if (x == palavra.size() or (palavra[x] != palavra[x-1]))
            {

                    resultado.append(min(contador,2), palavra[x-1]);
                    contador = 1;
     
            }
            else{
                contador++;
            }
        }

        caracteres = resultado.size();
        resto = caracteres%2;
        if (resto == 0)
        {
            k = caracteres/2;
            cout<<k<<endl;
        }
        else if (resto==1){
            k = (caracteres-1)/2;
            cout<<k<<endl;
        }
        


    }

    return 0;
}