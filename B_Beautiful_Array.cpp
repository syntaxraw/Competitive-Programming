#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    long long n, k, b, s;
    cin >> n >> k >> b >> s;
    long long min_sum = k*b;
    long long max_sum = k*b + n*(k-1);
    if (s<min_sum || s > max_sum){
        cout << -1 << endl;
    }
    else {
        vector<ll> ans(n, 0);
        ans[0] = min_sum;
        s-=min_sum;
        for (int i = 0; i<n; i++){
            long long add = min(k-1, s);
            ans[i] += add;
            s -= add;
        }
        for (long long i = 0; i < n; i++)
				cout << ans[i] << " ";
			cout << endl;
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