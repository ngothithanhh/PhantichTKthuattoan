#include<bits/stdc++.h>

using namespace std;
main(){
	int n; cin >> n;
	stack<int> S; S.push(n);
	set<int> Out; Out.insert(n);
	
	while(!S.empty()){
		int u = S.top();
		S.pop();
		for(int a = 1; a*a <= u; a++){
			if(u%a==0){
				int v = (a-1)*(u/a + 1);
				if(Out.find(v)==Out.end()){
					S.push(v);
					Out.insert(v);
				}
			}
		}
		
	}
	
	for(auto v:Out){
		cout << v<<" ";
			
	}
	
}

