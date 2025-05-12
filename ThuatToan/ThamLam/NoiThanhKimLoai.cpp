#include<bits/stdc++.h>

using namespace std;

main(){
	priority_queue<int, vector<int>, greater<int>> q;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		q.push(x);
	}
	
	int res = 0;
	for(int i = 0; i < n-1; i++){
		int x = q.top(); q.pop();
		int y = q.top(); q.pop();
		res += (x+y);
		q.push(x+y);
	}
	cout << res;
}
