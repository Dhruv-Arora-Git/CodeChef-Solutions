#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c == 180)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}