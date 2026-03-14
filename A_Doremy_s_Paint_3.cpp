#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i<n; i++){
            cin >> arr[i];
        }  
        //input


        map <ll, ll> mp;
        for (int i = 0; i<n; i++){
            mp[arr[i]]++;
        }

        if(mp.size()>=3) cout << "No\n";

        else {
            ll freq_1 = mp.begin()->second;
            ll freq_2 = mp.rbegin()->second;
            if (freq_1 == freq_2) {
                cout << "Yes\n";
            }
            else if (abs(freq_1-freq_2)==1 && n%2 == 1){
                cout << "Yes\n";
            }
            else {
                cout << "No\n";
            }
        }
    }
     return 0;
}