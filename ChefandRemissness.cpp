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
        ll a1, a2;
        cin >> a1 >> a2;
        cout << max(a1, a2) << " " << a1 + a2 << "\n";
    }
    return 0;
}