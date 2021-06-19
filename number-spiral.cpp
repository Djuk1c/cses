#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

// O(1)
void solve()
{
    ll x, y;
    cin >> y >> x;

    ll m = max(x, y);
    ll maxDiagonalNum = m*m - (m-1);

    // for (ll i = 1; i < m; i++)
    // {
    //     maxDiagonalNum += (i*2);
    // }

    ll diff = max(x, y) - min(x, y);

    if (y > x)
    {
        if (y % 2 == 0)
            cout << maxDiagonalNum + diff;
        else
            cout << maxDiagonalNum - diff;
    }
    else
    {
        if (x % 2 == 0)
            cout << maxDiagonalNum - diff;
        else
            cout << maxDiagonalNum + diff;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}