#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.second != b.second) return a.second < b.second;
	return a.first < b.first;
}

main(){
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i].first >> v[i].second;
	}
	
	sort(v.begin(), v.end(), cmp);
	
	int res = 0, t = -1e9;
	for(int i =0; i < n; i++){
		if(v[i].first > t){
			t = v[i].second;
			res++;
		}
	}
	cout << res;
}
