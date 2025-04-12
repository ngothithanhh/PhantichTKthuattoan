#include<bits/stdc++.h>

using namespace std;

//#define x first
//#define y second

typedef pair<int, int> pii;

main(){
	int n, m, k;
	cin >> n >> m >> k;
	queue<pii> Q;
	Q.push({0,0});
	map<pii,int> M;
	M[{0,0}] = 0;
	
	while(!Q.empty()){
		pii z = Q.front();
		Q.pop();
		int a = z.first, b = z.second;
		int t = a + b;
		vector<pii> vt = {
			{0, b},        // Do het thung a
			{n, b},        // Do day thung a
			{a, 0},        // Do het thung b
			{a, m},        // Do day thung b
			{max(0, t - m), min(t, m)}, // Do a -> b
			{min(t, n), max(0, t - n)}  // Do b -> a
		};
		for(auto u : vt){
			if(M.count(u) == 0){
				Q.push(u);
				M[u] = M[z] + 1;
				if(k == u.first || k == u.second){
					cout << M[u];
					return 0;
				}
			}
			
		}
	}
	cout << "Khong dong duoc\n";
	return 0;
	
}
