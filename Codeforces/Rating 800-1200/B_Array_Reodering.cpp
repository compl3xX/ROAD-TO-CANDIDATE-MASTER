#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int a[2000];
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

bool cmp(int x, int y)
{
    return x % 2 < y % 2;
}

int main()

{
    fastio;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, cmp);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                if (__gcd(a[i], a[j]*2) > 1)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
