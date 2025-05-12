#include<bits/stdc++.h>

using namespace std;

main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	long long sum[n+5];
	sum[0] = 0;  
	sum[1] = a[0];
	for(int i = 2; i <= n; i++){
		sum[i] = sum[i-1] + a[i-1];
	}
	
	long long m = 0;
	for(int i = k; i <= n; i++){
		m = max(m, sum[i] - sum[i-k]);
	}
	cout << m;
}
