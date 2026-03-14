#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long move = 0;
    cin >> n;
    long long prev, curr;
    cin >> prev;
    for(int i=1; i<n; i++){
        cin >> curr;
        if(curr<prev){
           move += prev - curr;
           

        }
        else{
            prev = curr;
        }
    }
    cout<< move << endl;
    return 0;
}