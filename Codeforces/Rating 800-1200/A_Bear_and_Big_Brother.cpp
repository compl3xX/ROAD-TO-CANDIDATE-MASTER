#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int l, b;
    cin >> l >> b;
    int year = 1;
    while (1)
    {
        l = l * 3;
        b = b * 2;
        if (l > b)
        {
            cout << year << "\n";
            break;
        }
        year++;
    }

    return 0;
}
