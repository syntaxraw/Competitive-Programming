#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    long long a, b;
    cin >> a >> b;
    if (b>a) swap(a,b);
    if (a==b) cout << 0 << " " << 0 << endl;
    else {
        ll gcd = a - b;
        ll moves = min(b%gcd, gcd - b % gcd);
        cout << gcd << " " << moves << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}