#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// This shit is giga scuffed

int main()
{
    ll n;
    cin >> n;
 
    ll sum = 0;
 
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    double half = (double)sum / (double)2;
    if (ceil(half) == floor(half)) // Number is integer
    {
        // Then we can make two sets
        cout << "YES\n";
        // Check if n is odd or even
        if (n % 2 == 0)
        {
            cout << n / 2 << endl;
            for (ll i = 2; i < n; i++)
            {
                cout << i << " " << i+1 << " ";
                i = i+3; 
            }
            cout << endl;
            cout << n / 2 << endl;
            for (ll i = 1; i < n; i++)
            {
                if (i == 1)
                {
                    cout << i << " ";
                    i = i+2;
                }
                else
                {
                    cout << i << " " << i+1 << " ";
                    i = i+3; 
                }
            }
            cout << n << endl;
        }
        else
        {
            cout << n / 2 + 1 << endl;
            for (ll i = 1; i < n; i++)
            {
                cout << i << " " << i+1 << " ";
                i += 3;
            }
            cout << endl;

            cout << n / 2 << endl;
            for (ll i = 3; i < n; i++)
            {
                cout << i << " " << i+1 << " ";
                i += 3;
            }
            cout << n << endl;
        }
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
