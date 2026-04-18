#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, k, q;
    cin >> n >> k >> q;
    vector <ll> a(n);
    for (ll i = 0; i<n; i++){
        cin >> a[i];
        a[i] = a[i] > q ? 0 : 1;
    }
    ll count_1s = 0;
    ll ways = 0;
    for (ll i = 0; i<n; i++){
        if (a[i] == 1) count_1s++;
        else {
            if (count_1s>=k){
                ll diff = (count_1s - k + 1);
                ways+= (diff * (diff + 1)) / 2;

            }
            count_1s = 0;
        }
    }
    if (count_1s >= k){
        ll diff = (count_1s - k + 1);
                ways+= (diff * (diff + 1)) / 2;
    }
    cout << ways << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t;
    while(t--)
        solve();
    return 0;
}