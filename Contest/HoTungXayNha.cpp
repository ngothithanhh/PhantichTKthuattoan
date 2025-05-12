#include<bits/stdc++.h>

using namespace std;

main(){
	int n;
	cin >> n;
	int a[100];
	a[0] = 0; a[1] = 1;
	for(int i = 2; i < 100; i++){
		a[i] = a[i-1]+i;
	}
	
	int sum = 0, res = 0;
	for(int i =1; i<100; i++){
		sum+=a[i];
		if(sum > n){
			res = i-1;
			break;
		}
	}
	cout << res;
}
