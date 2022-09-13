// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

inline int in() {
    int x;
    scanf("%d", &x);
    return x;
}

const int N = 2002, INF = 1e9;

int w[N][N], tmp[N][N];
int d[N], a[N], b[N];

void addE(int u, int v, int weight) { w[u][v] = min(w[u][v], weight); }

bool check(int n, int src) {
    bool bad = false;
    fill(d, d + n, INF);
    d[src] = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                if (d[k] > d[j] + w[j][k]) {
                    d[k] = d[j] + w[j][k];
                    if (i == n - 1)
                        bad = true;
                }
    return !bad;
}

bool check(int n, int src, int limit) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            tmp[i][j] = w[i][j];
    for (int i = limit; i < n; i++)
        addE(i, i - limit, -1);
    bool res = check(n, src);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            w[i][j] = tmp[i][j];
    return res;
}

int main() {
    int n = in();
    int src = 0;
    for (int i = 0; i < n; i++) {
        fill(w[i], w[i] + n, INF);
        w[i][i] = 0;
    }
    for (int q = in(); q; q--) {
        int l = in(), r = in(), k = in() - 1;
        addE(r - 1, l - 1, -k);
        addE(l - 1, r - 1, k);
    }
    for (int i = 0; i + 1 < n; i++) {
        addE(i, i + 1, 1);
        addE(i + 1, i, 0);
    }
    if (!check(n, src)) {
        cout << "-1\n";
        return 0;
    }
    int L = 0, R = n;
    while (R - L > 1) {
        int mid = (L + R) / 2;
        if (check(n, src, mid))
            R = mid;
        else
            L = mid;
    }
    check(n, src, R);
    for (int i = 1; i < n; i++)
        b[i] = d[i] - d[i - 1];
    for (int i = 1; i <= n; i++) {
        if (b[i - 1])
            a[i] = 1;
        else
            a[i] = a[i - 1] + 1;
        cout << a[i] << " ";
    }
    cout << endl;
}
