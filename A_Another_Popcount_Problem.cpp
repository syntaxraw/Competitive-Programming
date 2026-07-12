#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    ll pow = 0;
    while(true){
        ll sum = (1LL << pow) * k;
        if (sum <= n){
            ans+=k;
            n-=sum;
            pow++;
        }
        else {
            ans += n/(1LL << pow);
            break;
        }
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