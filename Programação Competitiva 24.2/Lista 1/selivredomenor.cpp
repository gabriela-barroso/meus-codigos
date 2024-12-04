#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        int n,sub;
        cin >> n;
        vector<int> a(n);
        
        for (int k=0; k<n; k++)
        {
            cin >> a[k];
        }
        sort(a.begin(),a.end());
        
        size_t j = 0;

        while (j<a.size()-1)
        {
            sub = abs(a[j]-a[j+1]);
            if (sub<=1)
            {
                a.erase(a.begin() + j);
            }
            else
            {
                j++;
            }
        }
        
        if (a.size()>1)
        {
            cout << "NO"<<endl;
        }

        else
        {
            cout << "YES"<<endl;
        }
    }






    return 0;
}