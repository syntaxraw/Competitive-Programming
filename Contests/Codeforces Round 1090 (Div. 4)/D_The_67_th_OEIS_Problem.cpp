#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> primes;
    vector<bool> isPrime(200000, true);
    for (int i = 2; primes.size() <= 10005; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            for (long long j = 1LL * i * i; j < 200000; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cout << 1LL * primes[i] * primes[i + 1] << " ";
        }
        cout << endl;
    }

    return 0;
}
