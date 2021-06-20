#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    ll res = 0;

    for (ll i = 5; n / i >= 1; i *= 5)
    {
        res += n / i;
    }

    cout << res << "\n";

    return 0;
}
