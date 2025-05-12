#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int a[105];             // M?ng m?nh giá
int C[105][10005];      // B?ng s? t? ít nh?t

// Truy v?t t? b?ng C d? in ra các m?nh giá dã dùng
void TRACE(int n, int M) {
    if (M == 0) return;
    if (n == 0) return;

    if (C[n][M] == C[n - 1][M]) {
        TRACE(n - 1, M);  // Không dùng a[n], chuy?n lên dòng trên
    } else {
        TRACE(n, M - a[n]);  // Dùng a[n], gi?m M di
        cout << a[n] << " ";
    }
}

int main() {
    int n, M;
    cin >> n >> M;

    for (int i = 1; i <= n; i++) cin >> a[i];

    // Kh?i t?o C[0][j] = INF (không th? d?i du?c khi chua dùng d?ng nào)
    for (int j = 1; j <= M; j++) C[0][j] = INF;

    // Duy?t t?ng m?nh giá
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= M; j++) {
            if (j < a[i]) {
                C[i][j] = C[i - 1][j];  // Không dùng du?c a[i]
            } else {
                C[i][j] = min(C[i - 1][j], 1 + C[i][j - a[i]]);  // Dùng ho?c không dùng a[i]
            }
        }
    }

    if (C[n][M] >= INF) {
        cout << "Khong doi duoc\n";
    } else {
        cout << "So to it nhat: " << C[n][M] << endl;
        cout << "Cac to da dung: ";
        TRACE(n, M);
        cout << endl;
    }

    return 0;
}

