// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

#define pb push_back
#define X first
#define Y second
typedef long long ll;

using namespace std;
const ll maxn = 1e6 + 5;
const ll INF = 4e18;

int z, x, n, a, b, minn, dp[maxn];
vector<int> v[100000 + 5];

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> a >> b;
    n = 100000 + 1;
    for (int i = 2; i <= n; i++)
        for (int j = i * 2; j <= n; j += i)
            v[j].pb(i);
    dp[b] = 0;
    for (int i = b - 1; i >= a; i--) {
        z = v[i].size(), minn = 10000000;
        for (int j = 0; j < z; j++) {
            x = v[i][j];
            if (i + x > b)
                continue;
            if (dp[i + x] != -1)
                minn = min(minn, dp[i + x] + 1);
        }
        if (minn == 10000000)
            dp[i] = -1;
        else
            dp[i] = minn;
    }
    cout << dp[a];
    return 0;
}