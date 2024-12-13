
#include <bits/stdc++.h>
using namespace std;
 
int main(){

    int t;
    cin >> t;

    for (int i=0; i<t; i++)
    {
        string palavra;
        cin >> palavra;
        sort(palavra.begin(),palavra.end());
        bool variada = true;
        for (size_t j = 0; j<palavra.size()-1; j++)
        {
            if ((palavra[j] == palavra[j+1]) or (palavra[j] + 1 != palavra[j + 1]) )
            {
                variada = false;
                break;
            }

        }

        if (!variada)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" <<endl;
        }
                

    
    }

    
  

    return 0;
}

