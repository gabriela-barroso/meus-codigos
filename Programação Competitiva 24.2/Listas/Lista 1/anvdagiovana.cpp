#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    deque<int> dq;
    for (int k=0; k<n; k++)
    {
        int elem;
        cin>>elem;
        dq.push_back(elem);
    }

    sort(dq.begin(),dq.end());
        
    vector<int> v;
    int count = 0;

    while (!dq.empty())
    {
        
        if (!dq.empty())
        {
            int ultimo;
            ultimo = dq.back();
            v.push_back(ultimo);
            dq.pop_back();

        }

        if (!dq.empty())
        {
            int primeiro;
            primeiro = dq.front();
            v.push_back(primeiro);
            dq.pop_front();

            count++;
            
        }  
    }

    if (n<=2)
    {
        count = 0;
        cout << count << endl;
    }

    else if (n%2==0)
    {
        int saida = count-1;
        cout << saida << endl;

    }
    else
    {
        cout << count << endl;
    }
            

    
    for (int x : v) 
    {
    cout << x << " ";
    }
        
    
    



    return 0;
}