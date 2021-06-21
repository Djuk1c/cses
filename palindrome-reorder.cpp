#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin >> s;

    map <char, int> m;
    for (char& c : s)
    {
        if (m.find(c) == m.end())
            m[c] = 1;
        else
            m[c]++;
    }

    string a = "";
    char toAdd = 'a';
    int countOnes = 0;
    int countOdd = 0;
    for (auto &p : m)
    {
        if (p.second % 2 != 0)
        {
            countOdd++;
            if (countOdd > 1)
            {
                cout << "NO SOLUTION\n";
                return 0;
            }
        }
        if (p.second % 2 != 0)
        {
            if (countOnes == 0)
            {
                toAdd = p.first;
                countOnes++;
            }
            else
            {
                cout << "NO SOLUTION\n";
                return 0;
            }
        }

        for (int i = 0; i < p.second/2; i++)
            a += p.first;
    }

    string ans = a;
    if (s.length() % 2 != 0)
        ans += toAdd;
    reverse(a.begin(), a.end());
    ans += a;
    
    cout << ans << endl;

    return 0;
}
