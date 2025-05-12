#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define int long long

const int MOD = 1e9 + 7;
const int MAX = 1001;

int n, m, res = 0;
bool visited[MAX][MAX];
vector<string> s;
int d[MAX][MAX];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs(int i, int j) {
    queue<pair<int, int>> q;
    q.push({i, j});
    visited[i][j] = true;
    d[i][j] = 0;

    vector<vector<int>> res(n, vector<int>(m, 0));
    res[0][0] = 1;

    while(!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for(int k = 0; k < 4; k++) {
            int i1 = x + dx[k];
            int j1 = y + dy[k];

            if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && !visited[i1][j1] && s[i1][j1] != '0') {
                visited[i1][j1] = true;
                d[i1][j1] = d[x][y] + 1;
                res[i1][j1] = res[x][y];
                q.push({i1, j1});
            }
            else if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && d[i1][j1] == d[x][y] + 1 && s[i1][j1] != '0') {
                res[i1][j1] = (res[i1][j1] + res[x][y]) % MOD;
            }
        }
    }

    if(!visited[n - 1][m - 1]) {
        cout << "-1\n";
        return;
    }

    cout << res[n - 1][m - 1] << "\n" << d[n - 1][m - 1] << "\n";
}

void inp() {
    cin >> n >> m;
    s.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    bfs(0, 0);
}

signed main() {
    fastIO;
    inp();
    return 0;
}

