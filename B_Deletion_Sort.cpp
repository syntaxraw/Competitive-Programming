#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        vector <long long> arr(n);
        for (int i = 0; i<n; i++){
            cin >> arr[i];
        }
        if (is_sorted(arr.begin(), arr.end())){
            cout << arr.size() << endl;
        }
        else {
            cout << "1" << endl;
        }
    }
    return 0;
}