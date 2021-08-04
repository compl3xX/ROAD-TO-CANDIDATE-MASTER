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
        int x = 0, even = 0, odd = 0;

        for (int i = 1; i <= 2*n; i++)
        {
            cin >> x;
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }

        if (even == odd)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}