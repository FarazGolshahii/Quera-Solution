// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com


#include <bits/stdc++.h>

using namespace std;
#define Size(x) ((int)(x).size())
#define pb push_back
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
const int INF = 1e9 + 10;
const int MN = 1e3 + 5;

int n, m;
string s;
vector<int> adj[27][MN], rev[MN];
priority_queue <pii> S;
int dist[MN];
bool mk[MN];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    cin >> s;
    for (int i = 0; i < m; ++i) {
        int a, b;
        char c;
        cin >> a >> b >> c;
        --a, --b;
        adj[c - 'a'][a].pb(b);
        rev[b].pb(a);
    }
    for (int i = Size(s) - 1; ~i; --i) {
        for (int j = 0; j < n; ++j) if (!adj[s[i] - 'a'][j].empty()) dist[j] = INF;
        for (int j = 0; j < n; ++j) S.push({-dist[j], j});
        memset(mk, 0, sizeof mk);
        while (!S.empty()) {
            int v = S.top().second;
            S.pop();
            if (mk[v]) continue;
            mk[v] = true;
            for (auto u: rev[v]) {
                if (!mk[u] && dist[u] > dist[v] + 1) {
                    dist[u] = dist[v] + 1;
                    S.push({-dist[u], u});
                }
            }
        }
    }
    cout << (dist[0] >= INF ? -1 : dist[0] + Size(s)) << '\n';
    return 0;
}
