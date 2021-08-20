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
        ll n, x, t;
        cin >> n >> x >> t;
        ll z = t / x;
        if (z > n)
        {
            cout << ((n - 1) * n) / 2 << endl;
        }
        else
        {
            cout << z * n - ((z + 1) * z) / 2<<endl;
        }
    }

    return 0;
}
