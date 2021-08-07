#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n, hf;
    cin >> n >> hf;
    int hp, count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> hp;
        if (hp > hf)
            count += 2;
        else
            count++;
    }
    cout<<count<<"\n";

    return 0;
}
