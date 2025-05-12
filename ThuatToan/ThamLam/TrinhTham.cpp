#include<bits/stdc++.h>

using namespace std;

main(){
	priority_queue<pair<int,int>> q;
	int n, k;
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		int x;
		cin >> x;
		q.push({x,i});
		while(i - q.top().second + 1 > k) q.pop();
		if(i>=k) cout << q.top().first << " ";
	}
}
