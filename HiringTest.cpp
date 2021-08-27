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
        int candidates, problems, X, Y;
        cin >> candidates >> problems >> X >> Y;
        for (int i = 0; i < candidates; i++)
        {
            string q;
            cin >> q;
            int countF = 0, countP = 0;
            for (int j = 0; j < problems; j++)
            {
                if (q[j] == 'F')
                    countF++;
                else if (q[j] == 'P')
                    countP++;
            }

            if (countF >= X)
            {

                cout << "1";
            }
            else if ((countF >= X - 1) and (countP >= Y))
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
            countF = 0, countP = 0;
        }
        cout << "\n";
    }
    return 0;
}