#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        long long a[7];
        for (int i = 0; i<7; i++){
            cin >> a[i];
        }
        sort (a, a+7);

        for (int i = 0; i<6; i++){
            a[i] = a[i] * (-1);
        }
        long long sum = 0;
        for (int i = 0; i<7; i++){
            sum+=a[i];

        }
        cout << sum << endl;
       


      

   
       

        }
        return 0;
    }
