#include<bits/stdc++.h>

using namespace std;

string x, y;
int n,m, C[105][105];

void TRACE(int n, int m){
	if(C[n][m]==0) return;
	while(C[n][m] == C[n-1][m]) n--;
	while(C[n][m] == C[n][m-1]) m--;
	TRACE(n-1, m-1);
	cout << x[n];
}

main(){
	cin >> x; n = x.size(); x = "$"+x;
	cin >> y; m = y.size(); y = "$"+y;
	
	for(int i = 1; i <=n; i++) C[i][0] = 0;
	for(int j = 1; j <=m; j++) C[0][j] = 0;
	
	for(int i=1; i <=n; i++){
		for(int j = 1; j<=m; j++){
			if(x[i]==y[j]) C[i][j] = 1+C[i-1][j-1];
			else C[i][j] = max(C[i-1][j], C[i][j-1]);
		}
	}
	
	cout << C[n][m] <<"\n";
	TRACE(n,m);
}
