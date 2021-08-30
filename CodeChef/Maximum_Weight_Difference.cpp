#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int a[1000000];

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, k;

        cin >> n >> k;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int x = 0;
            cin >> x;
            a[i] = x;
            sum += x;
        }
        sort(a, a + n, greater<int>());

        int mx = max(k, n - k);
        int sum1 = 0;
        for (int i = 0; i < mx; i++)
        {
            sum1 += a[i];
        }

        cout << sum1 - (sum - sum1) << endl;
    }

    return 0;
}
