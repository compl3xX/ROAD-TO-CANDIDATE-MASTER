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
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        ll c = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                c++;
            }
        }
        if (b >= 0)
        {
            cout << n * (a + b) << endl;
        }
        else
        {
            cout << (c / 2 + 1) * b + a * n << endl;
        }
    }
    return 0;
}