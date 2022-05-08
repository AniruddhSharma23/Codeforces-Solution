
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
        ll n, m;
        cin >> n >> m;
        if (n < m)
        {
            swap(n, m);
        }
        ll k;
        if (m == 1 && n > 2)
        {
            cout << -1 << endl;
        }
        else
        {
            if ((n + m) % 2)
            {
                k = 2 * n - 3;
            }
            else
            {
                k = 2 * n - 2;
            }
            cout << k << endl;
        }
    }
    return 0;
}