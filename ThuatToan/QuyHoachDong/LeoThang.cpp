#include<bits/stdc++.h>

using namespace std;

main(){
	int n;
	cin >> n;
	long c[n+5] = {0,1,2,4};
	for(int i = 4; i <=n; i++){
		c[i]=c[i-1]+c[i-2]+c[i-3];
	}
	cout << c[n];
}
