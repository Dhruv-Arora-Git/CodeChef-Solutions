#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, A, B;
        cin >> a >> b >> A >> B;
        cout << (A / a) + (B / b) << '\n';
    }
    return 0;
}