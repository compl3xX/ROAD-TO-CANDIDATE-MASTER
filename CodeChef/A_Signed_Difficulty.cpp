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
    double x;
    cin >> x;
    int X = x * 10;
    int y = X % 10;
    X = X/ 10;
    if (y >= 0 && y <= 2)
    {
        cout << X << "-";
    }
    if (y >= 3 && y <= 6)
    {
        cout << X;
    }
    if (y >= 7 && y <= 9)
    {
        cout << X << "+";
    }
    return 0;
}
