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
        char c;
        cin >> c;
        c = tolower(c);

        switch (c)
        {
        case 'b':
            cout << "BattleShip"
                 << "\n";
            break;
        case 'c':
            cout << "Cruiser"
                 << "\n";
            break;
        case 'd':
            cout << "Destroyer"
                 << "\n";
            break;
        case 'f':
            cout << "Frigate"
                 << "\n";
            break;
        default:
            break;
        }
    }
    return 0;
}