#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> a(n + k + 5, 0);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    long long res = 0;
    queue<int> Q;

    for (int i = 1; i <= n + k - 1; i++) {
    	if(i<=n) Q.push(a[i]);
    	if (Q.empty()) continue;

        int x = Q.front(); Q.pop();

        if (x <= m) {
            res += x; 
        } else {
            res += m; 
            Q.push(x - m); 
        }

        if (Q.size() > k && !Q.empty()) {
            Q.pop();
        }
    }

    cout << res;
}

