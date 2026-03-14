#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--){
        int n, s, x; cin >> n >> s >> x;
        vector <int> v(n);
        int sum = 0;
        for (auto &x: v){ cin >> x; sum+=x;}
        if (sum == s || ( sum <s && (sum-s)%x==0)) cout << "YES\n";\
        else cout << "NO\n";




    }


    return 0;
}