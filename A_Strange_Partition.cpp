#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; 
	cin >> t;
	while(t--){
	long long n, x;
	cin >> n >> x;
	long long a[n];
	for (long long i = 0; i<n; i++){
	cin >> a[i];
	}
	long long min_sum = 0;
	long long max_sum = 0;
	for (long long i = 0; i<n; i++){
	min_sum +=a[i];
	max_sum +=ceil((double)a[i]/x);
	}
	min_sum = ceil((double)min_sum / x);
	cout << min_sum << " " << max_sum << endl;
} 
	return 0;
}