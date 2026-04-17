#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    long long n;
    cin >> n ;
    vector<long long> s;
    long long l = INT_MAX;
    for (int i = 0; i<n; i++){
        long long m;
        cin >> m;
        vector<long long> a(m);
        for (auto &x : a){
            cin >> x;
        }
        sort (a.begin(), a.end());
        s.push_back(a[1]);
        l = min(l, a[0]);
    }
    sort (s.begin(), s.end());
    ll sum = accumulate(s.begin(), s.end(), 0LL);
    ll ls = s[0];
    cout << l + sum - s[0] << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}