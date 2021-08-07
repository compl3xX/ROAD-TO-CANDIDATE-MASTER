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
        ll n;
        cin >> n;
        ll y = (n / 3);
        ll x = n - (y * 2);
        if (x - y == 0 || abs(x - y) == 1)
        {
            cout << x << " " << y << endl;
        }
        else
        {
            while (1)
            {
                y++;
                x = n - (y * 2);
                if (x - y == 0 || abs(x - y) == 1)
                {
                    cout << x << " " << y << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
