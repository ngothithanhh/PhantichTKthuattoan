#include<bits/stdc++.h>

using namespace std;
map<char,int> F;


void Try(string z, int k){
	if(z.size()==n) cout << z <<"\n";
	else for(auto &f:F)
	if(f.second>0){
		f.second--;
		Try(z+f.first,n);
		f.second++;
	}
}
main(){
	string x;
	cin >> x;
	for(auto c:x) F[c]++;
	Try(" ",x.size());
}
