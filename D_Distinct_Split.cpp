#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n; cin >> n;
    string s;
    cin >> s;
    vector<int> c(26, 0), p(26, 0);
    int ans = 0;
    for (auto i: s){
        c[i - 'a']++;
    }
    for (auto x: s){
         --c[x - 'a'];
         ++p[x - 'a'];
         int current = 0;
         for (int i = 0; i<26; i++){
            current += min(1, c[i]) + min(1, p[i]);
         }
         ans = max(ans, current);
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