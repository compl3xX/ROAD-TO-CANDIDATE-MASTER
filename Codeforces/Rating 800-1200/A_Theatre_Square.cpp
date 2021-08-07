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
    ll n, m, a;
    cin >> n >> m >> a;

    cout << ((n + a - 1) / a) * ((m + a - 1) / a);

    return 0;
}