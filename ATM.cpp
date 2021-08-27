#include <bits/stdc++.h>
using namespace std;

int main()
{
    float initial;
    int withdraw;
    cin >> withdraw >> initial;
    if ((withdraw % 5 == 0) && ((withdraw + 0.50) <= initial))
        cout << fixed << setprecision(2) << (initial - withdraw - 0.50) << '\n';
    else
        cout << fixed << setprecision(2) << initial << '\n';
    return 0;
}