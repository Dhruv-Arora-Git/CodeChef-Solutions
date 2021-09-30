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
        string j, s;
        cin >> j >> s;
        ll count = 0;

        for (int i = 0; i < s.size(); i++)
        {
            for (int k = 0; k < j.size(); k++)
            {
                if (s[i] == j[k])
                {
                    count++;
                    break;
                }
            }
        }

        cout << count << "\n";
    }

    return 0;
}