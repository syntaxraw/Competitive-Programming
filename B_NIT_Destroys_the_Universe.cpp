#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                cnt++;
            }
        }
        bool zero_found = false;
        int left = 0;
        int right = n - 1;
        while (a[left] == 0)
        {
            left++;
        }
        while (a[right] == 0)
        {
            right--;
        }

        for (int i = left; i <= right; i++)
        {
            if (a[i] == 0)
            {
                zero_found = true;
            }
        }

        if (cnt == n)
        {
            cout << 0 << endl;
        }
        else if (zero_found == false)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}