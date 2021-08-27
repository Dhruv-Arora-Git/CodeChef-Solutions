#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    int count = 0;
    while (T--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '4')
                count++;
        }
        cout << count << '\n';
        count = 0;
    }

    return 0;
}