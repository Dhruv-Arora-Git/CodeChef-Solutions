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
        string doors;
        cin >> doors;
        int size = doors.size();
        int count = 0;
        if (doors[0] == '0')
            count++;
        for (int i = 0; i < size; i++)
        {
            if (doors[i] != doors[i + 1] and i + 1 < size)
                count++;
        }

        cout << count
             << "\n";
    }
    return 0;
}