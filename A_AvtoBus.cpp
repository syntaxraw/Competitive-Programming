#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        long long n; 
        cin >> n;


        if (n%2 == 1 || n < 4){
            cout << -1 << endl;
        }
        else {
            long long min_bus = (n+5)/6;
            long long max_bus = n/4;
            cout << min_bus << " " << max_bus << endl;
        }
       
    }
    return 0;
}