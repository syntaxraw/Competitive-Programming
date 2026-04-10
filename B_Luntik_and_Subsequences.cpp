#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int zero_count = 0;
        int ones_count = 0;
        for (long long i = 0; i < n; i++)
        {
            if (a[i] == 0)
                zero_count++;
            else if (a[i] == 1)
                ones_count++;
        }
        long long result = (long long)pow(2, zero_count) * ones_count;
        cout << result << endl;
    }
    return 0;
}