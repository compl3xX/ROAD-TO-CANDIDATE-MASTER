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
        int a, b;
        cin >> a >> b;
        if (abs(a - b) % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            if (a == b)
            {
                if (a == 0 && b == 0)
                {
                    cout << 0 << endl;
                }
                else
                {
                    cout << 1 << endl;
                }
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }

    return 0;
}
