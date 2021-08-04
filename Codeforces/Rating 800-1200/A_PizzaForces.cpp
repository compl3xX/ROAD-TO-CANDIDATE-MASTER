#include <bits/stdc++.h>
#define ll long long int
const ll mx = 1e17;
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
        cout << max(6ll, n + 1) / 2 * 5<<endl;
    }

    return 0;
}
