#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int res = 0;
    int current = 1;

    for (int i = 0; i < s.length()-1; i++)
    {
        if (s[i] == s[i+1])
        {
            current++;
        }
        else
        {
            res = max(current, res);
            current = 1;
        }
    }
    
    res = max(res, current);
    cout << res << endl;

    return 0;
}