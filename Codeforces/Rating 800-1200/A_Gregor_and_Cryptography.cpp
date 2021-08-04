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
        ll p;
        cin >> p;
        if (p == 5)
        {
            cout << 2 << " " << 4 << endl;
        }
        else
        {
            cout << 2 << " " << p / 2 << endl;
        }
    }

    return 0;
}
