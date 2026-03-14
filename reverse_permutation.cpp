#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for (auto &x: v) cin >> x;
        int l = 0;
        for (; l<n; l++){
            if (v[l] != n-l) break;
        }
        int r = 0;
        for (; r<n; r++){
            if (v[r] == n-l) break;
        }
        if (l<=n-1 && r<=n-1){
            reverse (v.begin() + l , v.begin() + r + 1 );
        }
        for (auto &x : v) cout << x << " ";
        cout << "\n";
    }
    return 0;
}