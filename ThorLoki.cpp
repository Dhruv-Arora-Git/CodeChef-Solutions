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
        ll thor, loki, magic;
        cin >> thor >> loki >> magic;
        cout << max(magic - thor, magic - loki) << "\n";
    }
    return 0;
}