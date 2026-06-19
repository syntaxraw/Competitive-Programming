#include <bits/stdc++.h>
using namespace std;
using ll = long long;
long long ceil_division(long long a, long long b) {
	return (a + b - 1) / b;
}

void solve(){
    long long x, y, k;
    cin >> x >> y >> k;
    long long sticksGained = x - 1;
    long long sticksNeeded = k * y + k - 1;
    long long trades = 0;
		
	trades += ceil_division(sticksNeeded, sticksGained);
    trades += k;
    cout << trades << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}