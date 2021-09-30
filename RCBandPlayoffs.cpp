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
        int x, y, z;
        cin >> x >> y >> z;
        if (x + 2 * z >= y)
            cout << "Yes"
                 << "\n";
        else
            cout << "No"
                 << "\n";
    }
    return 0;
}