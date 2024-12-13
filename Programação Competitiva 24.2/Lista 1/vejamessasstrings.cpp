#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    for (int i=0; i<t; i++)
    {
        string palavra,ordenada;
        cin>>palavra;

        ordenada = palavra;
        sort(ordenada.begin(),ordenada.end());

        bool alfabetica = true;

        for (size_t j = 0; j<ordenada.size()-1; j++)
        {
            if ((ordenada[j] == ordenada[j+1]) or (ordenada[j] + 1 != ordenada[j + 1]) )
            {
                alfabetica = false;
                break;
            }

        }

        size_t tem_a = palavra.find('a');
        if (tem_a == string::npos)
        {
            cout<< "NO"<< endl;
            continue;
        }

        for (size_t k = tem_a; k < palavra.size()-1; k++)
        {
            if (palavra[k] > palavra[k+1]) 
            {
                alfabetica = false;
                break;
            }
        }
        
        for (size_t l=0; l< tem_a; l++) 
        {
            if (palavra[l] < palavra[l+1]) 
            {
                alfabetica = false;
                break;
            }
        }

        if (!alfabetica)
        {
            cout<< "NO"<< endl;
        }
        else
        {
            cout<<"YES"<< endl;
        }

          


    }




    return 0;
}