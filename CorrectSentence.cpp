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
        bool flag;
        for (int i = 0; i < a; i++)
        {
            string s;
            cin >> s;
            int lang1 = 0, lang2 = 0;

            for (int j = 0; j < s.size(); j++)
            {
                flag = false;
                if (s[j] >= 'a' and s[j] <= 'm')
                {
                    lang1++;
                }
                else if (s[j] >= 'N' and s[j] <= 'Z')
                {
                    lang2++;
                }
            }
            if (lang1 == s.size() or lang2 == s.size())
                flag = true;
            if (!flag)
                break;
        }
        if (flag)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}