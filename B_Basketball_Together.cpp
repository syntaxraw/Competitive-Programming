#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    long long n, d;
    cin >> n >> d;
    vector<long long> a(n);
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long left = -1;
    long long right = n-1;
    long long teams = 0;
    long long team_size = 1;
    while (left < right){
        if ((a[right]*team_size) <= d && left < right) {
            team_size++;
            left++;
        }
        else{
            teams++;
            right--;
            team_size = 1;
        }
    }
    cout << teams << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
        solve();
    return 0;
}