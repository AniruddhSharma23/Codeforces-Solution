
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
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            x--;
            s += x;
        }
        if (s % 2)
        {
            cout << "errorgorn" << endl;
        }
        else
        {
            cout << "maomao90" << endl;
        }
    }
    return 0;
}