
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

        string s;
        cin >> s;

        ll p = s.length();
        ll k = 0;
        string x;
        for (int i = 0; i < p; i++)
        {
            k += s[i] - 'a' + 1;
        }
        if (p % 2)
        {
            ll h = min(s[0], s[p - 1]) - 'a' + 1;
            k -= 2 * h;
        }
        if (k > 0)
        {
            cout << "Alice " << k << endl;
        }
        else
        {
            cout << "Bob " << -k << endl;
        }
    }
    return 0;
}