#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    long long x = 0, y = 0, z = 0;
    long long a, b, c;
    

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        x+=a;
        y+=b;
        z+=c;
    }

    if (x==0 && y == 0 && z == 0) cout << "YES" << endl;
    else cout << "NO" << endl;


      
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
        solve();
    return 0;
}