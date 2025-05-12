#include<bits/stdc++.h>

using namespace std;

main(){
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	long C[n+5] = {};
	for(int i = 1; i <=n; i++){
		C[i] = -1;
		if(i>a && C[i-a]>=0) C[i] = max(C[i], C[i-a]+1);
		if(i>b && C[i-b]>=0) C[i] = max(C[i], C[i-b]+1);
		if(i>c && C[i-c]>=0) C[i] = max(C[i], C[i-c]+1);

	}
	cout << C[n];
}
