#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];

        bool check = true;

        for (ll i = 0; i < n - 1; i++)
        {
            if (v[i] % 2 == v[i + 1] % 2)
                check = false;
        }
        if (check)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
