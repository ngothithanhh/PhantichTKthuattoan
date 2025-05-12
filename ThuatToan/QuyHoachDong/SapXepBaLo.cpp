#include<bits/stdc++.h>

using namespace std;

int n,m, a[105], b[105], C[105][1005];
void TRACE(int n, int m){
	while(n>0 && m>0){
		if(a[n] <= m && C[n][m] == C[n-1][m-a[n]]+b[n]){
			cout << "Chon: "<< n<< "kt: " << a[n] << "gt: " << b[n]<<"\n";
			m-=a[n]; 
		}
		n--;
	}
}
main(){
	cin >> n >> m;
	for(int i = 1; i <=n; i++) cin >> a[i] >> b[i];
	
	for(int i = 1; i <=n; i++) C[i][0] = 0;
	for(int j = 1; j <=m; j++) C[0][j] = 0;
	
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=m; j++){
			if(a[i]>j) C[i][j] = C[i-1][j];
			else C[i][j] = max(C[i-1][j], b[i]+C[i-1][j-a[i]]);
		}
	}
	if(C[n][m] == 0) cout << -1 <<"\n";
	else{
		cout << C[n][m] <<"\n";
		TRACE(n,m);
	}
	
}
