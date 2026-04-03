#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long n, q;
        cin >> n >> q;
        vector<long long> a(n);
        for (long long i = 0; i<n; i++){
            cin >> a[i];
        }
        long long sum = 0;

        for (int i = 0; i<n; i++){
            sum+=a[i];

        }
        vector<long long> prefix_sum(n+1, 0);
        for (int i = 1; i<=n; i++){
            prefix_sum[i] = prefix_sum[i-1] + a[i-1];
        }
        while(q--){
            long long l,r,k;
            cin >> l >> r >> k;
            long long removed_sum = prefix_sum[r] - prefix_sum[l-1];
            long long sum_add = (r-l+1) *k;
            long long total_sum = sum - removed_sum + sum_add;
            if(total_sum % 2 == 1){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;

        }
        
    }
    return 0;
}