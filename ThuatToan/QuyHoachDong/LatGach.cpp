#include<bits/stdc++.h>

using namespace std;

main(){
	int n;
	cin >> n;
	long C[n+5] = {0,1,2};
	for(int i = 3; i <=n; i++){
		C[i] = C[i-1]+C[i-2];
		
	}
	cout << C[n];
}
