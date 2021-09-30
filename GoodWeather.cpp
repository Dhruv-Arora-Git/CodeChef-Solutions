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
        int arr[7];
        for (int i = 0; i < 7; i++)
        {
            cin >> arr[i];
        }
        int sun = 0, rain = 0;
        for (int i = 0; i < 7; i++)
        {
            if (arr[i] == 1)
                sun++;
            else
                rain++;
        }
        if (sun > rain)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}