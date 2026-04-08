#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i<n; i++){
            cin >> a[i];
        }

        map<long long, long long> mp;
        for (long long i = 0; i<n; i++){
            mp[a[i]]++;
        }
        long long current_highest_freq = 0;
        for (auto i: mp){
            current_highest_freq = max(current_highest_freq, i.second);
        }
        long long operation = 0;
        while (current_highest_freq < n){
            operation++;
            if (current_highest_freq*2 <= n){
                
                operation += current_highest_freq;
                current_highest_freq *= 2;

            }
            else {
                operation += n - current_highest_freq;
                current_highest_freq = n;

            }
        }
        cout << operation << endl;
    }
    return 0;
}