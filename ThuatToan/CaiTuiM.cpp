#include<bits/stdc++.h>

using namespace std;

main(){
	int n, M, res = 0;
	cin >> n >> M;
	int x[n+5] = {}, a[n+5];
	for(int i = 1; i <= n; i++){
		cin >>a[i];
	}
	
	while(x[0]==0){
		int t = 0;
		for(int i=1; i<=n; i++) t+=a[i]*x[i];
		if(t<=M) res = max(t,res);
		int j;
		for(j = n; x[j]==1; j--){
			x[j] = 0;
		},,,
		x[j] = 1;
	}
	cout << res;
}
