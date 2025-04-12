#include<bits/stdc++.h>

using namespace std;

vector<int> lonGanNhat(int n, int a[]){
    stack<int> s;
    vector<int> b1(n,-1), b2(n,-1);
    for(int i = 0; i < n; i++){
        while(!s.empty() && a[s.top()] <= a[i]){
            cout << "pop: " << s.top() << "\n";
            s.pop();
        }
        if(!s.empty()){
            cout << "b" << i << ": " << s.top() <<"\n";
            b1[i] = s.top();
        }
        cout << "push: " << i <<"\n\n";
        s.push(i);
    }

    while (!s.empty())
    {
        s.pop();
    }

    for(int i = n-1; i >= 0; i--){
        while(!s.empty() && a[s.top()] <= a[i]){
            cout << "pop: " << s.top() << "\n";
            s.pop();
        }
        if(!s.empty()){
            cout << "b" << i << ": " << s.top() <<"\n";
            b2[i] = s.top();
        }
        cout << "push: " << i <<"\n\n";
        s.push(i);

    }

    vector<int> res(n);
    for(int i = 0; i < n; i++){
        if(b1[i] == -1 && b2[i] == -1){
            res[i] = -1;
        }
        else if(b1[i] == -1){
            res[i] = b2[i];
        }
        else if(b2[i] == -1){
            res[i] = b1[i];
        }
        else{
            if ((i - b1[i]) <= (b2[i] - i)) {
                res[i] = b1[i];
            } else {
                res[i] = b2[i];
            }
        }

    }
    return res;

}

main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> b = lonGanNhat(n,a);
    for(int i : b){
        cout << i <<" ";
    }
}