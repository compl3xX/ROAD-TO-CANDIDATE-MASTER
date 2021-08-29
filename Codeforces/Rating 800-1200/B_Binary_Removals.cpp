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
        string s;
        cin >> s;
        int flag = 1;
        if (is_sorted(s.begin(), s.end()))
        {
            cout << "YES\n";
        }
        else
        {
            for (int i = s.size() - 1; i > 0; i--)
            {
                if (s[i] == '0' && s[i - 1] == '0')
                {

                    int y = i - 1;
                    
                    for (int i = y; i > 0; i--)
                    {

                        if (s[i] == '1' && s[i - 1] == '1')
                        {
                            flag = 0;
                            break;
                        }
                    }
                }
            }

            if (flag == 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}