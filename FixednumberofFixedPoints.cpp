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
        int n, k;
        cin >> n >> k;
        int arr[n];
        if (n - 1 == k)
        {
            cout << -1 << "\n";
        }
        else
        {
            for (int i = 0; i < k; i++)
            {
                arr[i] = i + 1;
            }
            int temp = n;
            for (int i = k; i < n; i++)
            {
                arr[i] = temp--;
            }
            // output
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}