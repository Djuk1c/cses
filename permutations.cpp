#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // Edge cases
    // Only 2 and 3 dont have beautiful permutation
    // Solution works only if last odd number - 2 > 1
    // Which doesnt work if n = 4, since last odd number is 3
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }
    if (n == 4)
    {
        cout << "2 4 1 3";
        return 0;
    }

    vector<int>a;

    for (int i = 1; i < n+1; i+=2)
    {
        a.push_back(i);
    }
    for (int i = 2; i < n+1; i+=2)
    {
        a.push_back(i);
    }

    // Output
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}