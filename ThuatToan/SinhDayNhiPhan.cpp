#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	cin >> n;
	int x[n+5] ={};
	while(x[0] == 0){
		for(int i=1; i<=n; i++) cout<<x[i] << " ";
		cout << "\n";
		int j;
		for(j = n; x[j]==1; j--) x[j]=0;
		x[j] = 1;
	}
}
