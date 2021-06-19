#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        a[i] = t;
    }

    ll res = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < a[i-1] && i > 0)
        {
            res += a[i-1] - a[i];
            a[i] = a[i-1];
        }
    }

    cout << res << endl;

    return 0;
}