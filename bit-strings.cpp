#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const unsigned long long M = 1000000007;

int main()
{
    ll n;
    cin >> n;

    ll res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= 2;
        res %= M;
    }

    cout << res << endl;

    return 0;
}
