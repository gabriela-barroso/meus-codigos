#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    int t,s,ans,x,diferenca,res;
    cin >> t;
    for (int i = 0; i<t; i++)
    {
        cin >> s;
        ans = 0;
        x = 1;
        vector<int> v;
        while (ans<s)
        {
        v.push_back(x);
        ans+=x;
        x+=2;
        }
        diferenca = ans-s;
 
        int ultimo = v.back();
        v.pop_back();
        int novo = ultimo-diferenca;
        v.push_back(novo);
        
        res = v.size();
        cout << res << endl;
    
    }
    
    
    
    return 0;
}
