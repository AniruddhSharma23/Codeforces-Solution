
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int k = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '0' && s[i + 1] == '0')
                k += 2;
            if (s[i] == '1' && s[i - 1] == '0' && s[i + 1] == '0')
                k++;
        }
        cout << k << endl;
    }
    return 0;
}