#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            for (int i = 1; i < n; i += 2)
            {
                cout << i + 1 << " " << i << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << 2 << " " << 3 << " " << 1 << " ";
            for (int i = 4; i < n; i += 2)
            {
                cout << i + 1 << " " << i << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}