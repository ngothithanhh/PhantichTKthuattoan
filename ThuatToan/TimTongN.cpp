#include<bits/stdc++.h>

using namespace std;

int x[1000]={1},n;

void Try(int k, int t){
	if(t==n){
		for(int i=1; i<k; i++) cout << x[i] << "+";
		cout << x[k] << " = " << n <<"\n";
	}
	else for(x[k+1]=x[k]; x[k+1]+t <= n; x[k+1]++) Try(k+1,t+x[k+1]);
}
main(){
	cin >> n;
	Try(0,0);
	
}
