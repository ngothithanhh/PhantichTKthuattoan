#include<bits/stdc++.h>

using namespace std;

int C[105][10005], a[105], n, M;

void TRACE(int n, int M){
	if(C[n][M] == 0) return;
	while(C[n][M] == C[n-1][M]) n--;
	TRACE(n, M-a[n]);
	cout << a[n] <<" ";
}

main(){
	cin >> n >> M;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 0; i <=n; i++) C[i][0] = 0;
	for(int j = 0; j <=M; j++) C[0][j] = 1e9;
// 	fill(C[0]+1,C[0]+M+1,1e9);
	
	for(int i = 1; i <=n; i++){
		for(int j = 1; j <= M; j++){
			if(a[i] > j) C[i][j] = C[i-1][j];
			else C[i][j] = min(C[i-1][j], 1+C[i][j-a[i]]);
		}
	}
	
	if(C[n][M] == 1e9) cout <<"Khong doi duoc";
	else{
		cout << C[n][M] <<"\n";
		TRACE(n,M);
	} 
	
}
