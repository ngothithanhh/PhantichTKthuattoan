#include<bits/stdc++.h>

using namespace std;
string x, y;
int n;
void Try(string z, int k){
	if(k==n) cout << z <<"\n";
	else{
		Try(z+x[k],k+1);
		if(y[k]!=x[k]) Try(z+y[k],k+1);
	}
}
main(){
	cin >> x >> y;
	n = x.length();
	Try(" ",0);
}
