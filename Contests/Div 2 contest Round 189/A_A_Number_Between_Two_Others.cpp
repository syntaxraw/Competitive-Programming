#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    long long x,y;
    cin >> x >> y;
    long long diff = y - x;
   
   if ((diff % x == 0) && (y % diff!=0)) cout << "YES" << endl;
   else cout << "NO" << endl;
  
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}