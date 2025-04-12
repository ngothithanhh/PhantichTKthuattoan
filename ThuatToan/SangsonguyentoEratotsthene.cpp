#include<bits/stdc++.h>

using namespace std;

main(){
	int n;
	cin >> n;
	bool s[n+5];
	fill(s,s+n+1,true); //lap day 
	for(int i = 2; i <=n ; i++){
		if(s[i]){
			cout << i << " ";
			for(int j = i*i; j <=n; j+=i){
				s[j] = false;
			}
		}
		
	}
}
