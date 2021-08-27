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
        int x, y, k, n;
        cin >> x >> y >> k >> n;
        vector<pair<int, int>> notebooks(n);
        for (int i = 0; i < n; i++)
        {
            int n, m;
            cin >> n >> m;
            notebooks[i] = {n, m};
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (((notebooks[i].first + y) >= x) && (notebooks[i].second <= k))
            {
                flag = true;
            }
        }
        if (flag)
            cout << "LuckyChef"
                 << "\n";
        else
            cout << "UnluckyChef"
                 << "\n";
    }
    return 0;
}