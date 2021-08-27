#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    int count_even = 0;
    int count_odd = 0;
    while (T--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }
    (count_even > count_odd) ? cout << "READY FOR BATTLE" << '\n' : cout << "NOT READY" << '\n';
    return 0;
}