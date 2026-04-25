#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int countW = 0;

    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'W')
            countW++;
    }

    int minW = countW;

    for (int i = k; i < n; i++)
    {

        if (s[i - k] == 'W')
            countW--;

        if (s[i] == 'W')
            countW++;

        minW = min(minW, countW);
    }

    cout << minW << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}