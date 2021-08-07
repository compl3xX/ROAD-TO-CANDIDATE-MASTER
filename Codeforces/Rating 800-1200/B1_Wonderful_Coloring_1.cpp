#include <bits/stdc++.h>
#define ll long long int
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main()

{
    fastio;
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        if (s.length() == 1)
        {
            cout << 0 << endl;
        }

        else
        {
            map<char, int> m;
            int lth = 0;

            for (int i = 0; i < s.size(); i++)
            {
                m[s[i]]++;
            }
            for (auto &value : m)
            {
                if (value.second >= 2)
                {
                    lth++;
                }
            }
            cout << (m.size() + lth)/2 << endl;
        }
    }
    return 0;
}