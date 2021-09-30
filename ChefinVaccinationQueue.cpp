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
        int n, p, x, y;
        cin >> n >> p >> x >> y;
        int que[n + 1];
        int time = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> que[i];
        }

        for (int i = 1; i <= p; i++)
        {
            if (que[i] == 1)
                time += y;
            else
                time += x;
        }
        cout << time << "\n";
    }
    return 0;
}