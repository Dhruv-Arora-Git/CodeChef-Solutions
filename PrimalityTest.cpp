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
        int a;
        cin >> a;

        bool flag = false;
        for (int i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                flag = true;
                break;
            }
        }
        if (flag || a == 1)
        {
            cout << "no"
                 << "\n";
        }
        else
        {
            cout << "yes"
                 << "\n";
        }
    }
    return 0;
}