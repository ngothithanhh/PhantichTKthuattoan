#include<bits/stdc++.h>

using namespace std;

main(){
    pair<int, int> n;
    cin >> n.first >> n.second;
    stack<pair<int, int>> S; S.push(n);
    set<pair<int, int>> Out; Out.insert(n);
    while(!S.empty()){
        pair<int, int> u = S.top();
        S.pop();
        if(u.first % 2 == 0){
            pair<int, int> z = make_pair(u.second, u.first/2);
            if(Out.find(z)==Out.end()){
                S.push(z);
                Out.insert(z);
            }
        }
        if(u.second % 2 != 0){
            pair<int, int> z = make_pair((u.second+1) / 2, u.first);
            if(Out.find(z)==Out.end()){
                S.push(z);
                Out.insert(z);
            }
        }
    }
    cout << Out.size() << endl;10
    // for(pair<int, int> x: Out) cout << x.first <<" "<< x.second << endl;

}