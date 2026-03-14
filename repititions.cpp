#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    int n = 1;
    int m = 1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            m++;
            n = max(n,m);
        } else {
            m = 1;
        }
    }
    cout << n << endl;
    return 0;
}