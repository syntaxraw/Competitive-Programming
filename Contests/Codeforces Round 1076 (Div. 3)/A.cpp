#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n, s, x;
    cin >> n >> s >> x;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    for (int j = 0; j<n; j++){
        if (a[j] + x == s){
            cout << "Yes\n";
            break;
        }
        
        
    }
     cout << "No\n";
    return 0;
}