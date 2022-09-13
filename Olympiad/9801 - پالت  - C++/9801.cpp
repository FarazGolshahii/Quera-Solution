// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

#define fora(i, a, b) for(int (i)=(a);(i)<(b);(i)++)
#define for0(i, b) fora((i),0,(b))

const int maxn = 2e5 + 1;
const int maxk = 51;

int col[maxn];
int t[maxk][maxk], seg[4 * maxn][maxk];

void update(int u, int l, int r, int x, int y, int w) {
    if (y <= l or r <= x)
        return;

    if (x <= l and r <= y) {
        fora(i, 1, maxk)seg[u][i] = t[seg[u][i]][w];

        return;
    }

    fora(i, 1, maxk)seg[2 * u][i] = seg[u][seg[2 * u][i]];

    fora(i, 1, maxk)seg[2 * u + 1][i] = seg[u][seg[2 * u + 1][i]];

    fora(i, 1, maxk)seg[u][i] = i;

    int mid = (r + l) / 2;

    update(2 * u, l, mid, x, y, w);
    update(2 * u + 1, mid, r, x, y, w);
}

int get(int u, int l, int r, int x) {
    if (x < l or r <= x)
        return 0;

    if (l + 1 == r)
        return seg[u][col[x]];

    int mid = (r + l) / 2;

    int a = get(2 * u, l, mid, x);
    int b = get(2 * u + 1, mid, r, x);

    return seg[u][max(a, b)];
}

int main() {

    int n, k;
    cin >> n >> k;

    fora(i, 1, k + 1)fora(j, 1, k + 1)cin >> t[i][j];

    for0(id, 4 * maxn) {
        fora(x, 1, maxk)seg[id][x] = x;
    }

    fora(i, 1, n + 1)cin >> col[i];

    int q;
    cin >> q;

    while (q--) {
        char ch;
        cin >> ch;

        if (ch == '#') {
            int l, r, c;
            cin >> l >> r >> c;

            update(1, 1, n + 1, l, r + 1, c);
        } else {
            int v;
            cin >> v;

            cout << get(1, 1, n + 1, v) << "\n";
        }
    }

    return 0;
}