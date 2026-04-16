#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    long long n;
    cin >> n;
    int count_3s = 0;
    int count_2s = 0;
    while (n>0 && n%3 == 0){
        count_3s++;
        n/=3;
    }
    while (n>0 && n%2 == 0){
        count_2s++;
        n/=2;
    }
    if (n>1 || count_2s > count_3s){
        cout << -1 << endl;
    }
    else 
    cout << count_3s + (count_3s - count_2s) << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}