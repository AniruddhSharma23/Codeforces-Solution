
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
using ll = long long;

int main()
{
    // your code goes here
    ll t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x == 0 && y == 0)
        {
            cout << 0 << endl;
        }
        else if (sqrt((x * x) + (y * y)) == int(sqrt((x * x) + (y * y))))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}