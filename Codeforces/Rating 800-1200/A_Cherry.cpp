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
        vector<ll> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        ll mxp = 0;
        for (int i = 0; i < n - 1; i++)
        {

            mxp = max(mxp, arr[i] * arr[i + 1]);
        }
        cout << mxp << endl;
    }

    return 0;
}
