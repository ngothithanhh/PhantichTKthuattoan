#include<bits/stdc++.h>

using namespace std;

main(){
	int n;
	cin >> n;
	int a[n], b[n];
	for(int i= 0; i < n; i++){
		cin >> a[i] >> b[i];
	}
	
	int res = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] + b[i] > 0){
			res += a[i]+b[i];
		}
	}
	cout << res;
}
