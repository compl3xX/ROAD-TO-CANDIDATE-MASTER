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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string s1 = s;

        sort(s.begin(), s.end());
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
