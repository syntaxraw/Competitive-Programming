#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll pointer = n * k;
    long long a[n*k];
    for (ll i = 0; i< n * k; i++){
        cin >> a[i];
    }
    ll sum = 0;
    while (k--){
        pointer = pointer - (n/2 + 1);
        sum+= a[pointer];

    }
    cout << sum << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}