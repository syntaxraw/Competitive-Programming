#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }
    unordered_set<long long> s;
    for (int i = 0; i<n; i++){
        s.insert(a[i]);
    }
    if (s.size() < n)
			cout << "YES" << endl; 
		else
			cout << "NO" << endl; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}