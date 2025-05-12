#include<bits/stdc++.h>

using namespace std;



main(){
	int n; 
	cin >> n;
	int a[n];
	long long sum = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	long long res = 0;
	for(int i = 0; i < n; i++){
		sum+=a[i];
		res += a[i] * (sum - a[i]);
	}
	
	cout << res; 
}
