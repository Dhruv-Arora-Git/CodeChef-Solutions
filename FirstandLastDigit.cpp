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
        string s;
        cin >> s;
        cout << (s[0] - '0') + (s[s.size() - 1] - '0') << '\n';
    }
    return 0;
}