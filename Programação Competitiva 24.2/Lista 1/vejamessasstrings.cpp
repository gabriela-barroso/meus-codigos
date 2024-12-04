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

        cout << palavra << " " << ordenada;

        bool alfabetica = true;

        for (size_t j = 0; j<ordenada.size()-1; j++)
        {
            if (ordenada[j]>ordenada[j+1])
            {
                alfabetica = false;
                break;
            }

        char pos = 'a';

        for (size_t k = pos; k < palavra.size() - 1; k++)
        {
            if (palavra[k] + 1 != palavra[k + 1]) 
            {
                alfabetica = false;
                break;
            }
        }
            
        for (size_t l = pos; l > 0; l--) {
            if (palavra[l] - 1 != palavra[l - 1]) 
            {
                alfabetica = false;
                break;
            }
        }

        if (alfabetica==false)
        {
            cout<< "NAO"<< endl;
        }
        else if (alfabetica==true)
        {
            cout<<"SIM"<<endl;
        }

        }   


    }




    return 0;
}