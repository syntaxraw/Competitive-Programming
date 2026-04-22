#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    long long n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;
    s+=s;
    n = n*2;
    ll ind = -1;
    ll ans = INT_MIN;
    for (int i = n - 1; i>=0; i--){
        if (s[i] == 'g'){
            ind = i;
        }
        if (s[i] == c){
            ans = max(ans, ind - i);
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