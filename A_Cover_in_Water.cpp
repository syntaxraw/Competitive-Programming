#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n; cin >> n;
        string s;
        cin >> s;
        bool three_contiguous_empty_cells = false;
        int total_cells = 0;
        for (int i = 0; i<n; i++){
            if (s[i]=='.' && i+1 < n && s[i+1] == '.' && i+2 < n && s[i+2] == '.'){
                three_contiguous_empty_cells = true;
                break;
            }
            if (s[i]=='.'){
                total_cells++;
            }
            
        }
        if (three_contiguous_empty_cells) cout << "2" << endl;
        else cout << total_cells << endl;

    }
    return 0;
}