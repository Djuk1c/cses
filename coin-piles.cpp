#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    ll a, b;
    cin >> a >> b;

    // 2 from a, 1 from b
    // 1 from a, 2 from b

    if ((a+b) % 3 == 0 && (min(a, b) *2 >= max(a,b)))
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
