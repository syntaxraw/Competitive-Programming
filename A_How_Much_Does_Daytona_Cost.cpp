#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        long long n; cin >> n;
        long long k; cin >> k;
        vector<long long> a(n);
        for (long long i = 0; i<n; i++){
            cin >> a[i];
        }
        //input
        bool check = false;

        for (int i = 0; i<n; i++){
            if (k==a[i]){
                check = true;
                break;
            }
            
            
        }
        if (check) {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}