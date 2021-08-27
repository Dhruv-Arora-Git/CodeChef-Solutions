#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long T;
    cin >> T;
    long curr_max = 0, a = 0, b = 0;
    int winner = 0;

    while (T--)
    {
        int p1, p2;
        cin >> p1 >> p2;
        a += p1;
        b += p2;
        if (labs(a - b) > curr_max)
        {
            curr_max = labs(a - b);
            winner = (a > b) ? 1 : 2;
        }
    }
    cout << winner << " " << curr_max << '\n';
    return 0;
}