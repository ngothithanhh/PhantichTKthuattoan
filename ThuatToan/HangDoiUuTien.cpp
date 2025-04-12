#include<bits/stdc++.h>
using namespace std;

struct ss{
	bool operator()(int a, int b){
		return a%2 > b%2;
	}
};

main(){
//	priority_queue<int> Q;
//	priority_queue<int, vector<int>,greater<int>> Q;
	priority_queue<int, vector<int>,ss> Q;

	for(int x:{45,71,24,85,643,54,62,35,324,43}) Q.push(x);
	while(Q.size()){
		cout << Q.top()<< " ";
		Q.pop();
	}
}
