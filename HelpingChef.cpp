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
        int a;
        cin >> a;
        if (a < 10)
            cout << "Thanks for helping Chef!"
                 << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}