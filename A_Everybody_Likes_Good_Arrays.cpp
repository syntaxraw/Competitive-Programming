#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        long long n; cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];

        }

        long count_operations = 0;
        for (int i = 0; i < n-1; i++){
            if ((a[i]%2==0) == (a[i+1]%2==0)){
                count_operations++;
            }
        }
        cout << count_operations << endl;
    }
    return 0;
}