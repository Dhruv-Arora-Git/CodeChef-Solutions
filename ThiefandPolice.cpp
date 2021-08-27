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
        ll n, m, x, y, a, b;
        cin >> n >> m >> x >> y >> a >> b;
        ll theif = (n - x) + (m - y);
        ll police = (n - a) + (m - b) - min(n - a, m - b);
        cout << (theif <= police ? "YES\n" : "NO\n");
    }
    return 0;
}