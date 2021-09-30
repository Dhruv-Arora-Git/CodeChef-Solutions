#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while (T--)
    {
        ll n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        ll count = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] != v[i + 1])
            {
                count++;
            }
        }
        ll ans = 0;
        while (count)
        {
            count /= k;
            ans++;
        }

        cout << ans << "\n";
    }
    return 0;
}

/*
unordered_map<ll, ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            v[a]++;
        }

        ll count = 0;
        for (auto x : v)
        {
            if (x.second > 1)
            {
                count++;
                v.erase(x.first);
            }
        }
        ll size = v.size();

        while (size)
        {
            size = size / k;
            count++;
        }
        cout << count << "\n";
        v.clear();
*/