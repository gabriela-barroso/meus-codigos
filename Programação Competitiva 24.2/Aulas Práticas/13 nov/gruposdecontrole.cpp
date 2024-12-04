#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;

    while (N != 0)
    {
        if (N%2 != 0)
        {
            cout << N;
            break;
        }
        
        else
        {
            N = N/2;
            if (N%2!=0)
            {
                cout << N;
                break;
            }
        }
        
    }
    
    return 0;
}