#include <bits/stdc++.h>
using namespace std;

struct node {
    char kt;
    int ts;
    node *left, *right;

    node(char c, int t, node *L = nullptr, node *R = nullptr) {
        kt = c;
        ts = t;
        left = L;
        right = R;
    }
};

struct ss {
    bool operator()(node *p, node *q) {
        return p->ts > q->ts;
    }
};

void TRY(string z, node *p) {
    if (!p->left && !p->right) 
        cout << p->kt << "; " << z << "\n";
    else {
        TRY(z + "0", p->left);
        TRY(z + "1", p->right);
    }
}

int main() {
    string s;
    map<char, int> f;
    int res = 0;
    priority_queue<node*, vector<node*>, ss> Q;

    cin >> s;
    for (auto c : s) f[c]++;
    for (auto F : f) Q.push(new node(F.first, F.second));

    while (Q.size() > 1) {
        node *x = Q.top(); Q.pop();
        node *y = Q.top(); Q.pop();
        res += x->ts + y->ts;
        Q.push(new node('_', x->ts + y->ts, x, y));
    }

    cout << res << "\n";
    node *root = Q.top();
    TRY("", root);

    return 0;
}

