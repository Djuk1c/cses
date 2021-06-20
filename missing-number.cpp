#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n;
    cin >> n;
    // Add all numbers together, then find out which one is missing
    long int sum = 0;
    for (int i = 0; i < n-1; i++)
    {
        long int a;
        cin >> a;
        sum += a;
    }

    cout << (n*(n+1)/2) - sum;
    return 0;
}
