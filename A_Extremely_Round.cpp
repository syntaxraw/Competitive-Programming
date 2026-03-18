#include<bits/stdc++.h>
using namespace std;
bool check (long long x){
    long long zero_count = 0;
    long long digit_count = 0;
    while(x){
        if(x%10 == 0){
            zero_count++;
        }      
        digit_count++;
        x/=10;
        
    }
    return zero_count == digit_count - 1;
}
int main(){
    vector<long long> round_number;
    for (long long i = 1; i<=999999; i++){
        if(check(i) == true){
            round_number.push_back(i);
        }
    }

    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        long long ans = 0;
        for (int i = 0; i<round_number.size(); i++){
            if(round_number[i]<=n){
                ans++;
            }
            else break;
        }
        cout << ans << endl;
    }
    return 0;
}