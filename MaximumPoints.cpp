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
        int a, b, c, x, y, z;
        cin >> a >> b >> c >> x >> y >> z;
        int time = 240;
        int spenta = 0;
        int counta = 0;
        while ((spenta + a) <= time and counta < 20)
        {
            spenta += a;
            counta++;
        }
        time -= spenta;
        int spentb = 0;
        int countb = 0;
        while ((spentb + b) <= time and countb < 20)
        {
            spentb += b;
            countb++;
        }
        time -= spentb;
        int spentc = 0;
        int countc = 0;
        while ((spentc + c) <= time and countc < 20)
        {
            spentc += c;
            countc++;
        }
        int score = (x * counta + y * countb + z * countc);

        cout << score << "\n";
    }
    return 0;
}