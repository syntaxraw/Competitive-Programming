#include <bits/stdc++.h>
using namespace std;
using ll = long long;
long long nextPrime(long long n)
{
    for (long long i = n;; i++)
    {
        bool isPrime = true;
        for (long long j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            return i;
    }
}

void solve()
{
    long long d;
    cin >> d;
    long long p = nextPrime(d + 1);
    long long q = nextPrime(p + d);

    long long a = min(1LL * p * p * p, 1LL * p * q);
    cout << a << endl;
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