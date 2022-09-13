// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;
typedef pair <LL, LL> pLL;

# define MP make_pair
# define L first
# define R second

const int MAXN = 40, MAXA = 40, MAXB = 30, MAXC = 20, MAXD = 16;
const LL INF = 1e18, LIM = 1e12, MOD = 1e9 + 7;

LL dp[MAXN][MAXA][MAXB][MAXC][MAXD], p[10][MAXN];

vector <pLL> all;

int main() {
    ios_base::sync_with_stdio(false);

    dp[0][0][0][0][0] = 1;
    for (int i = 1; i < MAXN; i++)
        for (int a = 0; a < MAXA; a++)
            for (int b = 0; b < MAXB; b++)
                for (int c = 0; c < MAXC; c++)
                    for (int d = 0; d < MAXD; d++) {
                        if (a > 0) dp[i][a][b][c][d] += dp[i - 1][a - 1][b][c][d]; // 2
                        if (b > 0) dp[i][a][b][c][d] += dp[i - 1][a][b - 1][c][d]; // 3
                        if (a > 1) dp[i][a][b][c][d] += dp[i - 1][a - 2][b][c][d]; // 4
                        if (c > 0) dp[i][a][b][c][d] += dp[i - 1][a][b][c - 1][d]; // 5
                        if (a > 0 && b > 0) dp[i][a][b][c][d] += dp[i - 1][a - 1][b - 1][c][d]; // 6
                        if (d > 0) dp[i][a][b][c][d] += dp[i - 1][a][b][c][d - 1]; // 7
                        if (a > 2) dp[i][a][b][c][d] += dp[i - 1][a - 3][b][c][d]; // 8
                        if (b > 1) dp[i][a][b][c][d] += dp[i - 1][a][b - 2][c][d]; // 9
                    }

    for (int i = 1; i < 10; i++)
        p[i][0] = 1;

    for (int i = 1; i < 10; i++)
        for (int j = 1; j < MAXN; j++)
            p[i][j] = 1LL * p[i][j - 1] * i;

    for (int a = 0; a < MAXA; a++)
        for (int b = 0; b < MAXB; b++)
            for (int c = 0; c < MAXC; c++)
                for (int d = 0; d < MAXD; d++) {
                    LL sum = 0;
                    for (int i = 1; i < MAXN; i++)
                        sum = (sum + dp[i][a][b][c][d]) % MOD;

                    if (p[2][a] < INF && p[2][a] < INF / p[3][b] && p[2][a] * p[3][b] < INF / p[5][c] &&
                        p[2][a] * p[3][b] * p[5][c] < INF / p[7][d]) {
                        LL num = p[2][a] * p[3][b] * p[5][c] * p[7][d];
                        if (num <= LIM)
                            all.push_back(MP(num, sum));
                    }
                }

    sort(all.begin(), all.end());
    for (int i = 1; i < all.size(); i++)
        all[i].R = (all[i].R + all[i - 1].R) % MOD;

    int t;
    cin >> t;
    while (t--) {
        LL l, r;
        cin >> l >> r;
        int st = lower_bound(all.begin(), all.end(), MP(l, -INF)) - all.begin() - 1;
        int en = upper_bound(all.begin(), all.end(), MP(r, +INF)) - all.begin() - 1;
        LL ans = all[en].R - (st < 0 ? 0 : all[st].R);
        cout << ((ans % MOD) + MOD) % MOD << '\n';
    }
    return 0;
}
