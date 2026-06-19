#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    long long n, m;
    cin >> n >> m;
    vector<vector<long long>> a(n, vector<long long> (m));
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cin >> a[i][j];
        }
    }
    long long neg = 0;
    long long minm = INT_MAX;
    long long sum = 0;

    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            if (a[i][j] < 0){
                neg++;
            }
            minm = min(minm, abs(a[i][j]));
            sum += abs(a[i][j]);
        }
    }
    if (neg%2 == 0) cout << sum << endl;
    else cout << sum - 2 * abs(minm) << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}