#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    vector<vector<int>> matrix(5, vector<int>(5));

    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            cin >> matrix[i][j];
        }
    }
    int a, b;
   
        for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            if (matrix[i][j] == 1){
                a = abs(2 - i);
                b = abs(2 - j);
            }
        }
    }
    cout << a+b << endl;


}

int main(){
    solve();
}