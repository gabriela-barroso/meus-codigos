#include <bits/stdc++.h>

using namespace std;
 int main(){

    int t;
    cin>>t; 
    for (int i = 0; i<t; i++)
    {
        string a,nova_a;
        cin>>a;
        reverse(a.begin(),a.end());

        for (size_t i=0; i<a.size(); i++)
        {
            if (a[i]=='p')
            {
                a[i] = 'q';
            }
            else if (a[i] == 'q')
            {
                a[i] = 'p';
            }
            nova_a+=a[i];
        }
        cout<< nova_a<<endl;
    }


    return 0;
}