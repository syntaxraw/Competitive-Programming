#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
    while(t--){
        long long a, b;
        cin >> a >> b;
        long long xk, yk;
        cin >> xk >> yk;
        long long xq, yq;
        cin >> xq >> yq;
        set <pair<int, int>> king_hits, queen_hits;


        for (int j = 0; j<4; j++){
            king_hits.insert({xk + dx[j]*a, yk + dy[j]*b});
            king_hits.insert({xk + dx[j]*b, yk + dy[j]*a});

            queen_hits.insert({xq + dx[j]*a, yq + dy[j]*b});
            queen_hits.insert({xq + dx[j]*b, yq + dy[j]*a});
        }
        int ans = 0;
        for (auto position: king_hits){
            if(queen_hits.find(position)!=queen_hits.end()){
                ans++;
            }
        }
        cout << ans << endl;

    }

}