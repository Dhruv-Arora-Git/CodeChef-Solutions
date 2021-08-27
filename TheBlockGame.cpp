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
        string num;
        cin >> num;
        int first = 0;
        int last = num.size() - 1;
        bool palindrome = true;
        while (first <= last)
        {
            if (num[first] != num[last])
            {
                palindrome = false;
                break;
            }
            first++;
            last--;
        }
        if (palindrome)
            cout << "wins"
                 << "\n";
        else
            cout << "loses"
                 << "\n";
    }
    return 0;
}