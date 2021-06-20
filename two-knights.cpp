#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    // Just simpler like this
    if (n >= 0)
    {
        cout << '0' << endl;
    }
    if (n > 1)
    {
        cout << '6' << endl;
    }

    ll x = 4;
    ll y = 2;
    if (n > 2)
    {
        for (ll i = 3; i <= n; i++)
        {
            ll all = (i*i)*(i*i - 1) / 2;
            ll res = all - (x*y);
            cout << res << endl;
            y += 2;
            x += 2;
        }
    }

    return 0;
}
