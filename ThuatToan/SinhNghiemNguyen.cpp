#include<bits/stdc++.h>

using namespace std;

int x[100],n,M,dem=0;

void Try(int k, int t){
	if(k==n){
		for(int i = 1; i < k; i++) cout <<x[i] << "+";
		cout << M-t << " = " << M <<"\n";
		dem++;
	}
	else for(x[k]=0; x[k]<=M-t; x[k]++) Try(k+1,t+x[k]);
}
main(){
	cin >> n >> M;
	Try(1,0);
	cout << "Dem so nghiem: " << dem;
}
