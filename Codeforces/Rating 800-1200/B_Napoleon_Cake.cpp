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
        int a[n];
        int b[n];
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = n - 1; i >= 0; i--)
        {

            mx = max(mx, a[i]);
            

            if ((i + 1) > a[i])
            {

                if (mx > 0)
                {
                    b[i] = 1;
                    mx--;
                }
                else
                {
                    b[i] = 0;
                }
            }
            else
            {
                for (int j =i ; j>= 0; j--)
                
                {
                    b[j] = 1;
                }
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
