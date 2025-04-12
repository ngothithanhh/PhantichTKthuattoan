#include<bits/stdc++.h>

using namespace std;
set<char> V={'A','E','I','U','O'};
string x, y;
int n;
void Try(string z, int k, int d){
	if(d==0) return;
	if(k==n) cout << z <<"\n";
	else{
		Try(z+x[k],k+1,V.count(x[k])?0:d=1);
		if(y[k]!=x[k]) Try(z+y[k],k+1,V.count(y[k])?0:d=1);
	}
}
main(){
	cin >> x >> y;
	n = x.length();
	Try(" ",0,0);
}
