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
        int d, n;
        cin >> d >> n;
        int sum = 0;
        for (int i = 0; i < d; i++)
        {
            sum = n * (n + 1) / 2;
            n = sum;
        }
        cout << sum << "\n";
    }
    return 0;
}