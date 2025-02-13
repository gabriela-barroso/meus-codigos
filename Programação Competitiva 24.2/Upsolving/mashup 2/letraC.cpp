#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fast_io
    int n,a,sanan,resp=0;
    cin >> n;
    priority_queue<int> votos;
    for (int i = 0; i<n; i++)
    {
        cin >> a;
        if (i==0)
        {
            sanan = a;
        }
        else
        {
            if (a>=sanan)
            {
                votos.push(a);
            }
        }
    }
    while (votos.empty() == false and votos.top()>=sanan)
    {
        sanan+=1;
        a = votos.top();
        a-=1;
        votos.pop();
        votos.push(a);
        resp+=1;
    }
    cout<<resp<<endl;
    
    return 0;
}