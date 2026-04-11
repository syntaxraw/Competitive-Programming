#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i<n; i++){
        cin >> a[i];
    }

    long long total = a[0];
    for (int i = 1; i<n; i++){
        total&=a[i];
    }
    cout << total << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}