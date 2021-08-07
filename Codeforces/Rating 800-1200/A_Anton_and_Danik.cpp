#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            count++;
        else
            count--;
    }

    if (count > 0)
        cout << "Anton\n";
    else if (count == 0)
        cout << "Friendship\n";
    else
        cout << "Danik\n";

    return 0;
}
