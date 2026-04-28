#include <bits/stdc++.h>
using namespace std;
using ll = long long;

long long calcXor(long long n){
    long long a = n % 4;
    if (a == 0) return n;
    else if (a == 1) return 1;
    else if (a == 2) return n + 1;
    else return 0; 
}

void solve(){
    long long a, b;
    cin >> a >> b;
    long long xr = calcXor(a - 1);
    if (xr == b){
        cout << a << endl;
    }
    else if ((xr ^ b) != a) cout << a + 1 << endl;
    
    else cout << a + 2 << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}