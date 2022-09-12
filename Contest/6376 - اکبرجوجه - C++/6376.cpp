// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define N ((ll)101*1000)
#define MOD ((ll)1e9+7)

ll n, dp[N];
vector<ll> e[N];

void dfs(ll x, ll par = 0) {
    dp[x] = 1;
    for (auto u: e[x])
        if (u != par)
            dfs(u, x), dp[x] *= dp[u], dp[x] %= MOD;
    dp[x]++;
    dp[x] %= MOD;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        ll v, u;
        cin >> v >> u;
        e[v].push_back(u);
        e[u].push_back(v);
    }
    dfs(1);
    cout << dp[1];
    return 0;
}
