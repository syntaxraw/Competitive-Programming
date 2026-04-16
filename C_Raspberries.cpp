#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i<n; i++){
        cin >> a[i];
    }
    ll ans = INT_MAX;
    ll even_count = 0;
    for (ll i = 0; i<n; i++){
        if (a[i] % 2 == 0) even_count++;
        if (a[i] % k == 0) ans = 0;
        ans =  min(ans, (k - a[i] % k));
    }
    if (k == 4){
        if (even_count >= 2) ans = min(ans, 0LL);
        else if (even_count == 1) ans = min(ans, 1LL);
        else if (even_count == 0) ans = min(ans, 2LL);
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}