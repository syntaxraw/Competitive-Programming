#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i<n; i++){
        cin >> a[i];
    }
    for (ll i = 0; i<n; i++){
        cin >> b[i];
    }
    vector<ll> la(2 * n + 1, 0);
	vector<ll> lb(2 * n + 1, 0);
    ll cnt = 1;
    for (int i = 1; i<n; i++){
        if (a[i] == a[i-1]){
            cnt++;
        }
        else {
            la[a[i-1]] = max( la[a[i-1]], cnt);
            cnt = 1;
        }
    }
    la[a[n-1]] = max(la[a[n-1]], cnt);
    cnt = 1;
    for (int i = 1; i<n; i++){
        if (b[i] == b[i-1]){
            cnt++;
        }
        else {
            lb[b[i-1]] = max( lb[b[i-1]], cnt);
            cnt = 1;
        }
    }
    lb[b[n-1]] = max(lb[b[n-1]], cnt);
    ll maxi = -1;
    for (int i = 1; i<= 2*n; i++){
        maxi = max(maxi, la[i] + lb[i]);
    }
    cout << maxi << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}