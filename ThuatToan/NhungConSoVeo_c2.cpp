#include<bits/stdc++.h>

using namespace std;
void DFS(int n, set<int> &Out){
    if(Out.count(n)) return; //n da co trong Out
    Out.insert(n);
    for(int a = 1; a*a <= n; a++){
        if(n % a == 0){
            DFS((a-1)*(n/a + 1), Out);
        }
    }

}
main(){
    int n;
    cin >> n;
    set<int> Out;
    DFS(n, Out);
    for(int x: Out) cout << x <<" ";
}