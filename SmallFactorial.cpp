#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        long fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        cout << fact << '\n';
    }
    return 0;
}