#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long a[n];
        for (long long i = 0; i<n; i++){
            cin >> a[i];
        }  //input

        sort(a, a+n);
        long long counter = 1;
        long long largest_length = 1;
        
        for (long long i = 1; i<n; i++){
            if (a[i] - a[i-1] <= k){
                counter++;

            }
            else counter = 1;
        largest_length = max (largest_length, counter);
        }
        cout << n - largest_length << endl;
    }
    return 0;
}