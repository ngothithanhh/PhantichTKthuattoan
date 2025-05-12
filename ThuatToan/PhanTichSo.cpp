#include<bits/stdc++.h>

using namespace std;

void TRY(int n, vector<int>& a, int m){
	if(n==0){
		for(int i = 0; i < a.size(); i++){
			cout << a[i] << " ";
			if(i+1==a.size()) cout <<"\n";
		}
	} 
	else{
		for(int x = m; x <= n; x++){
			a.push_back(x);
			TRY(n-x,a,x);
			a.pop_back();
		}
	}
}

main(){
	int n;
	cin >> n;
	vector<int> a;
	TRY(n,a,1);
}

