#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    long long n, r, b;
    cin >> n >> r >> b;
    string s = "";
    long long B = r / (b + 1);
    long long E = r % (b + 1);
    for (int i = 1; i<= b + 1; i++){
        for (int j = 0; j<B; j++){
            s+='R';
        }
        if (E > 0){
            s+='R';
            E--;
        }
        if (i!=b+1){
            s+='B';
        }
    }
    cout << s << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}