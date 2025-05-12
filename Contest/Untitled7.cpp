#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MAXN = 501;
const int INF = 1e18;

void solve() {
	int n, res = 0;
	cin >> n;
	int a[n], b[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	
	for(int i = 0; i < n; i++) {
		if(a[i] + b[i] > 0) res += a[i] + b[i];
	}
	
	cout << res;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
