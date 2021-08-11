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
        vector<int> a;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int ans = 2;

        if (is_sorted(a.begin(), a.end()))
           { ans = 0;
}
        else if (a[0] == 1 || a[n - 1] == n)
           { ans = 1;}

        else if (a[0] == n && a[n - 1] == 1)
           { ans = 3;}
        cout << ans << endl;
    }

    return 0;
}
