#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 4 == 0)
        cout << (++n) << '\n';
    else
        cout << (--n) << '\n';
    return 0;
}