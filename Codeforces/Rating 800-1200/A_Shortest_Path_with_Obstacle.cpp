#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    int xa, ya, xb, yb, fx, fy;
    while (tc--)
    {
        cin >> xa >> ya >> xb >> yb >> fx >> fy;

        int dist = 0;

        if (xb == fx)
        {
            if ((fy > ya && fy < yb) || (fy < ya && fy > yb))
            {
                if (xa == fx)

                {
                    dist += 2;
                    xb += 1;
                    xa += 1;
                }
            }
        }
      
        if (yb == fy)
        {
            if ((fx > xa && fx < xb) || (fx < xa && fx > xb))
            {
                if (ya == fy)
                {
                    dist += 2;
                    yb += 1;
                    ya += 1;
                }
            }
        }

        int dist1 = 0, dist2 = 0;

        dist1 = abs(xb - xa);
        dist2 = abs(ya - yb);

        dist += dist1 + dist2;

        cout << dist << "\n";
    }

    return 0;
}
