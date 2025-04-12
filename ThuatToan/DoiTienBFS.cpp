#include<bits/stdc++.h>

using namespace std;

main(){
	int n, q;
	cin >> n >> q;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	while(q--){
		int m;
		cin >> m;
		queue<int> Q;
		map<int, int> M;
		Q.push(0);
		M[0] = 0;
		while(!Q.empty()){
			int u = Q.front();
			if(u == m) break;
			for(auto v: a){
				if(u+v <= m && M.count(u+v) == 0){
					Q.push(u+v);
					M[u+v] = M[u] + 1;
				}
			}
			Q.pop();
		}
		if(Q.empty())cout << -1 <<"\n";
		else cout << M[m] <<"\n";
		
	}
	
	
}
