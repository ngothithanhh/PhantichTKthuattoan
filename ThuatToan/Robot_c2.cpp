#include<bits/stdc++.h>

using namespace std;

void DFS(int x, int y, set<pair<int, int>> &Out){
    if(Out.count(make_pair(x, y))) return;
    Out.insert(make_pair(x, y));
    if(x % 2 == 0){
        DFS(y, x/2, Out);
    }
    if(y % 2 != 0){
        DFS((y+1)/2, x, Out);
    }
}

int main(){
    set<pair <int, int>> S;
    int x, y;
    cin >> x >> y;
    DFS(x, y, S);
    cout << S.size();
}