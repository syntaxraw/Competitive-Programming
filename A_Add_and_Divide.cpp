#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    long long a, b;
    cin >> a >> b;
    long long ans = INT_MAX;
   for (int i = 0; i<32; i++){
    long long op = i;
    long long nb = b + i;
    if (nb == 1){
        continue;
    }
    long long copy_a = a;
    while (copy_a > 0){
        copy_a/=nb;
        op++;
    }
    ans = min(ans, op);
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