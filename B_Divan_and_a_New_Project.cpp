#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    long long n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<pair<long long, long long>> mpp;
    for (int i = 0; i<n; i++)
    {
        mpp.push_back({a[i], i});
    }
    sort(mpp.rbegin(), mpp.rend());
    vector<long long> res(n+1, 0);
    res[0] = 0;
    long long coordinate = 1;
    long long minutes = 0;
    for (int i = 0; i<n; i++){
        res[mpp[i].second + 1] = coordinate;
        minutes += (2 * abs(coordinate) * mpp[i].first);  
        if (coordinate < 0)
				coordinate = abs(coordinate) + 1;
			else
				coordinate = -coordinate;
    }
    cout << minutes << endl;
    for (auto it: res) cout << it << " ";
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}