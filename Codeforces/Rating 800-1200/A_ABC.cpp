#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string str;
        cin >> str;
        if (x == 1)
        {
            cout << "YES" << endl;
        }
        else if (x == 2)
        {
            if ((str == "11") || (str == "00"))
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}