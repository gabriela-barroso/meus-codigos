#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fast_io
    string d;
    cin >> d;
    if (d == "N")
    {
        cout << "S"<<endl;
    }
    else if (d == "S")
    {
        cout << "N"<<endl;
    }
    else if (d == "E")
    {
        cout << "W"<<endl;
    }
    else if (d == "W")
    {
        cout << "E"<<endl;
    }
    else if (d == "NE")
    {
        cout << "SW" << endl;
    }
    else if (d == "SW")
    {
        cout << "NE"<<endl;
    }
    else if (d == "NW")
    {
        cout << "SE" << endl;
    }
        else if (d == "SE")
    {
        cout << "NW"<<endl;
    }
    
    return 0;
}