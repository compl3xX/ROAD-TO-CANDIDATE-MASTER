#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> n >> t;
    string s;
    cin >> s;
    int t1 = 0;
    while (t--)
    {
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == 'G' && s[i - 1] == 'B')
            {

                char temp = s[i-1];
                s[i-1] = s[i];

                s[i] = temp;
                i++;
            }
        }
    }

    cout << s;
    return 0;
}