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
        int n;
        cin >> n;
        int minNum = pow(10, n - 1);

        for (int i = minNum; i < 10000; i += 2)
        {
            if (i % 3 == 0 and i % 9 != 0)
            {
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}