#include<bits/stdc++.h>

using namespace std;

main(){
	int n, k, m, s, f;
	cin >> n >> k >> m >> s >> f;
	queue<int> Q;
	map<int, int> M;
	
	Q.push(s);
	M[s] = 0;
	
	while(!Q.empty()){
		int u = Q.front();
		if(f == u) break;
		if(u+k <= n && M.count(u+k) == 0){
			Q.push(u+k);
			M[u+k] = M[u] + 1;
		}
		if(u-m > 0 && M.count(u-m) == 0){
			Q.push(u-m);
			M[u-m] = M[u] + 1;
		}
		Q.pop();
		
	}
	if(Q.empty()) cout << -1;
	else  cout << M[f];
	
}
