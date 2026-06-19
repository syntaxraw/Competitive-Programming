#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int y;
    cin >> y;

    while (true) {
        y++;
        string s = to_string(y);
        set<char> digits(s.begin(), s.end());

        if (digits.size() == 4) {
            cout << y;
            break;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
        solve();
    return 0;
}