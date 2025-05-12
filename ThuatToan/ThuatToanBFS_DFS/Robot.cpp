#include<bits/stdc++.h>

using namespace std;

#define x first
#define y second
main(){
	pair<int,int> n;
	cin >> n.x >> n.y;
	stack<pair<int,int>> s; s.push(n);
	set<pair<int,int>> out; out.insert(n);
	
	while(!s.empty()){
		pair<int, int> u = s.top();
		s.pop();
		if(u.x%2==0){
			pair<int,int> z = make_pair(u.y,u.x/2);
			if(out.find(z)==out.end()){
				out.insert(z);
				s.push(z);
			}
		}
		
		if(u.y%2!=0){
			pair<int,int> z = make_pair((u.y+1) / 2,u.x);
			if(out.find(z)==out.end()){
				out.insert(z);
				s.push(z);
			}
		}
	}
	
	for(pair<int,int> z:out){
		cout << "(" <<z.x<<","<<z.y<<") ";
	}
}
