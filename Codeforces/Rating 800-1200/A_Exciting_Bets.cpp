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
        ll a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
           // if (b > a)
           // {
            //    swap(a, b);
           // }
            ll diff = abs(a - b);

            ll y = a % diff;

            ll k = min(y, (diff - y));

            cout << diff << " " << k << endl;
        }
    }

    return 0;
}
