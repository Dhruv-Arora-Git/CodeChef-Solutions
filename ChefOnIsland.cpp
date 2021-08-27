#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        float x, y, r1, r2, d;
        cin >> x >> y >> r1 >> r2 >> d;

        if (min(x / r1, y / r2) >= d)
        {
            cout << "yes"
                 << "\n";
        }
        else
        {
            cout << "no"
                 << "\n";
        }
    }
    return 0;
}