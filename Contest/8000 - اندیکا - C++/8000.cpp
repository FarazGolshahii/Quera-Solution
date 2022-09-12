// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;
typedef pair<int, int> pii;
typedef pair <LL, LL> pll;

#define PB push_back
#define MP make_pair
#define L first
#define R second
#define sz(x) ((int)(x).size())
#define smax(x, y) ((x) = max((x), (y)))
#define smin(x, y) ((x) = min((x), (y)))
#define all(x) x.begin(),x.end()

const int maxn = 500 + 10;
LL dp[2][maxn][maxn];
int n, K;
string s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> K
        >> s;
    string t;
    int cur = 0,
            prv = 1;
    memset(dp[cur], 63, sizeof dp[cur]);
    dp[cur][0][0] = 0;
    for (int i = 0; i < n; i++) {
        swap(cur, prv);
        memset(dp[cur], 63, sizeof dp[cur]);
        for (int j = 0; j <= i + 1; j++) {
            for (int k = 0; k <= K; k++) {
                //don't change!
                if (s[i] == 'B' and j)
                    smin(dp[cur][j][k], dp[prv][j - 1][k] + j);
                else if (s[i] == 'K')
                    smin(dp[cur][0][k], dp[prv][j][k]);
                //change
                if (s[i] == 'K')
                    continue;
                if (k)
                    smin(dp[cur][0][k], dp[prv][j][k - 1]);
            }
        }
    }
    LL ans = 1e18;
    for (int j = 0; j <= n; j++)
        for (int k = 0; k <= K; k++)
            smin(ans, dp[cur][j][k]);
    cout << 1LL * n * (n + 1) / 2 - ans << '\n';
    return 0;
}