#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> a(n);
    
    for (ll i = 0; i<n; i++){
        ll x;
        cin >> x;
        a[i] = {x, i+1};
    }
     for (ll i = 0; i<n; i++){
        a[i].first =  a[i].first % k;
        if (a[i].first == 0){
            a[i].first = k;
        }
     }
     sort(a.begin(), a.end(), [](pair<ll, ll> a, pair<ll, ll> b){
        if (a.first != b.first){
            return a.first > b.first;
        }
        return a.second < b.second;
     });
     for (auto it: a){
        cout << it.second << " ";
     }
     cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}