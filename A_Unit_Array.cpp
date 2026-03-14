#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i<n; i++){
            cin >> a[i];
        }
        long long pos_count = 0;
        long long neg_count = 0;
        for (int i = 0; i<n; i++){
            if (a[i]==1){
                pos_count++;
            }
            else {
                neg_count++;
            }

        }
        long long operations = 0;
        while (pos_count < neg_count || neg_count % 2 == 1){
            pos_count++;
            neg_count--;
            operations++;

        }
        cout << operations << endl;
    }
    return 0;
}