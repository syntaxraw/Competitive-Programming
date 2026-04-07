#include<bits/stdc++.h>
using namespace std;
int main(){
    int tst;
    cin >> tst;
    while (tst--){
        string s, t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();
        
        vector<int> freq_of_t(26,0);
        for (int i = 0; i<m; i++){
            freq_of_t[t[i] - 'A']++;
        }

        for (int i = n-1; i>=0; i--){
            if (freq_of_t[s[i] - 'A'] > 0){
                freq_of_t[s[i] - 'A']--;
            }
            else {
                s[i] = '.';
            }
        }
        string final ;
        for (int i = 0; i < n; i++){
            if (s[i]!='.'){
                final += s[i];
            }
        }
        if (final == t){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }


    }
    return 0;
}