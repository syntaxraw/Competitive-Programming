#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s; cin >> s;
    int zero_count = 0, one_count = 0;
    for (int i = 0; i<s.size(); i++){
        if (s[i] == '0') zero_count++ ;
        else if (s[i] == '1') one_count++ ;
    }
    int min_count = min(zero_count, one_count);
    if (min_count % 2 == 1) cout << "DA" << endl;
    else cout << "NET" << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}