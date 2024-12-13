#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }
  
    vector<bool> presente(n+1,false);



    for (int j = 0; j<n; j++)
    {
        if (v[j]>=1 and v[j]<=n)
        {
            presente[v[j]] = true;
        }

    }

    int count = 0;

    for (int k = 1; k<=n; k++)
    {
        if (presente[k])
        {
            count++;
        }
    }
    cout << count << endl;
}