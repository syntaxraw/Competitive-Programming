#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool isFair(long long n){
    long long num = n;
    while (num!=0){
        int x = num % 10;
        if (x != 0 && n%x != 0){
            return false;
        }
        num /= 10;
    }
    return true;
}
void solve(){
    long long n;
    cin >> n;
    while(!isFair(n)) n+=1;
    cout << n << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}