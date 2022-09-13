// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

template<typename T1, typename T2, typename T3>
class triple {
public:
    T1 first;
    T2 second;
    T3 third;

    triple() {
        first = 0;
        second = 0;
        third = 0;
    }
};

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef set<int> si;
typedef set<ll> sl;
typedef set<pii> spii;
typedef set<pll> spll;
typedef map<string, int> mpsi;
typedef map<string, ll> mpsl;
typedef map<int, int> mpii;
typedef map<ll, ll> mpll;

#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define fora(i, a, b) for(int (i)=(a);(i)<(b);(i)++)
#define forla(i, a, b) for(ll (i)=(a);(i)<(b);(i)++)
#define for0(i, b) fora((i),0,(b))
#define forl0(i, b) forla((i),0,(b))
#define rofa(i, a, b) for(int (i)=(a);(i)>=(b);(i)--)
#define rofla(i, a, b) for(ll (i)=(a);(i)>=(b);(i)--)
#define rof0(i, a) rofa((i),(a),0)
#define rofl0(i, a) rofla((i),(a),0)
#define forag(i, a, b, g) for(int (i)=(a);(i)<(b);(i)+=(g))
#define forlag(i, a, b, g) for(ll (i)=(a);(i)<(b);(i)+=(g))
#define for0g(i, b, g) forag((i),0,(b),(g))
#define forl0g(i, b, g) forlag((i),0,(b),(g))
#define rofag(i, a, b, g) for(int (i)=(a);(i)>=(b);(i)-=(g))
#define roflag(i, a, b, g) for(ll (i)=(a);(i)>=(b);(i)-=(g))
#define rof0g(i, a, g) rofag((i),(a),0,(g))
#define rofl0g(i, a, g) roflag((i),(a),0,(g))
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define pf push_front
#define MP make_pair
#define F first
#define S second
#define GraphM1(g, n) int (g)[(n)][(n)]
#define GraphM2(g, n) vi (g)[(n)]

const int maxn = 5e4 + 100;

int n, m, k, t, ans;
int dist[maxn], a[maxn];
vpii g[maxn];

void dijkstra(int root) {
    if (dist[root] >= k)
        ans--;

    dist[root] = 0;

    spii s;

    s.insert(MP(0, root));

    while (!s.empty()) {
        pii P = *s.begin();
        s.erase(*s.begin());

        for (auto u : g[P.S])
            if (dist[u.F] > P.F + u.S && P.F + u.S < k) {
                if (dist[u.F] >= k)
                    ans--;

                s.erase(MP(dist[u.F], u.F));

                dist[u.F] = P.F + u.S;

                s.insert(MP(dist[u.F], u.F));
            }
    }
}

void addEdge(int v, int u, int w) {
    g[v].pb(MP(u, w));
    g[u].pb(MP(v, w));
}

int main() {
    IOS

    cin >> n >> m >> t >> k;

    for0(i, m) {
        int v, u, w1;
        cin >> v >> u >> w1;

        addEdge(v, u, w1);
    }

    ans = n;
    memset(dist, 63, sizeof(dist));

    for0(i, t) {
        cin >> a[i];

        dijkstra(a[i]);

        cout << ans << "\n";
    }

    return 0;
}