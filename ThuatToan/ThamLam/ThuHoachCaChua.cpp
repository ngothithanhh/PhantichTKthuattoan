#include<bits/stdc++.h>
#include <algorithm>

using namespace std;

main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n,greater<int>());
	int res = 0;
	for(int i = 0; i<n; i++){
		if(a[i] > i*k) res+= a[i] - i*k;
	}
	cout <<res;
}
