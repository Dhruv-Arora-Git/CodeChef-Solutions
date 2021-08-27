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
        int count = 0;
        ll amount;
        cin >> amount;

        if (amount >= 100)
        {
            count += (amount / 100);
            amount %= 100;
        }
        if (amount >= 50)
        {
            count += (amount / 50);
            amount %= 50;
        }
        if (amount >= 10)
        {
            count += (amount / 10);
            amount %= 10;
        }
        if (amount >= 5)
        {
            count += (amount / 5);
            amount %= 5;
        }
        if (amount >= 2)
        {
            count += (amount / 2);
            amount %= 2;
        }
        if (amount >= 1)
        {
            count += (amount / 1);
            amount %= 1;
        }
        cout << count << "\n";
    }
    return 0;
}