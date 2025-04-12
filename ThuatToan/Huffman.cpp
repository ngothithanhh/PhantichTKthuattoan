#include<bits/stdc++.h>
using namespace std;

main(){
	string s;
	map<char, int> f;
	long n, x, res=0;
	priority_queue<long, vector<long>, greater<long>> Q;
	cin >> s;
	for(auto c:s) f[c]++;
	for(auto F:f) Q.push(F.second);
	while(Q.size()>1){
		x = Q.top();Q.pop();
		x += Q.top();Q.pop();
		res += x;
		Q.push(x);		
	}
	cout << res;
}
