#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string a, b;
    cin >> a >> b;
    long long n = a.size();
    long long m = b.size();
    long long lcs = 0;
    for (long long l = 1; l<= min(n,m); l++){
        for (int i = 0; i+l<=n; i++){
            for (int j = 0; j+l<=m; j++){
                string A = a.substr(i, l);
                string B = b.substr(j, l);
                if (A == B){
                    lcs = max(lcs, l);
                }
            }
        }
    }
    long long ops = n + m - 2 * lcs;
    cout << ops << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}