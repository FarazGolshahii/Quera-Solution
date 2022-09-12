// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;
const int N = 1000 + 7;

bool mark[N][N];

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < k; i++) {
        int r, c;
        cin >> r >> c;
        mark[--r][--c] = 1;
    }
    if (k % 2 == 1) {
        cout << "0\n";
        return 0;
    }
    if (k == n * m) {
        cout << "-1\n";
        return 0;
    }
    cout << 1 << "\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (!mark[i][j]) {
                cout << i + 1 << " " << j + 1 << "\n";
                return 0;
            }

    return 0;
}
