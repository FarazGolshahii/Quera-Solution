// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")

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


// Const variables here
const int maxn = 2e5 + 69;
const int MOD = 1e9 + 7;

ll n, q;
ll arr[maxn], seg[maxn << 2], mark[maxn << 2], lazy[maxn << 2];

// Functions here
ll mod(ll x) {
    if (x < 0)
        x += MOD;

    return x % MOD;
}

ll sum(ll l, ll r) {
    l++;
    r++;

    ll x = mod(r * (r - 1) >> 1LL);
    ll y = mod(l * (l - 1) >> 1LL);

    return mod(x - y);
}

void build(ll u, ll l, ll r) {
    if (r - l == 1) {
        seg[u] = mod(arr[l]);
        return;
    }

    ll mid = (l + r) >> 1;

    build(u << 1 | 0, l, mid);
    build(u << 1 | 1, mid, r);

    seg[u] = mod(seg[u << 1 | 0] + seg[u << 1 | 1]);
}

void bang(ll u, ll l, ll r) {
    ll mid = (l + r) >> 1;

    seg[u << 1 | 0] = mod(seg[u << 1 | 0] + mod((mid - l) * lazy[u]));
    seg[u << 1 | 1] = mod(seg[u << 1 | 1] + mod((r - mid) * lazy[u]));

    lazy[u << 1 | 0] = mod(lazy[u << 1 | 0] + lazy[u]);
    lazy[u << 1 | 1] = mod(lazy[u << 1 | 1] + lazy[u]);

    lazy[u] = 0;

    seg[u << 1 | 0] = mod(seg[u << 1 | 0] + mod(mark[u] * sum(l, mid)));
    seg[u << 1 | 1] = mod(seg[u << 1 | 1] + mod(mark[u] * sum(mid, r)));

    mark[u << 1 | 0] = mod(mark[u << 1 | 0] + mark[u]);
    mark[u << 1 | 1] = mod(mark[u << 1 | 1] + mark[u]);

    mark[u] = 0;
}

void update(ll u, ll l, ll r, ll x, ll y, ll w) {
    if (l >= y or r <= x)
        return;

    if (l >= x and r <= y) {
        seg[u] = mod(seg[u] + mod((r - l) * w));
        lazy[u] = mod(lazy[u] + w);

        seg[u] = mod(seg[u] + sum(l, r));
        mark[u] = mod(mark[u] + 1);

        return;
    }

    ll mid = (l + r) >> 1;
    bang(u, l, r);

    update(u << 1 | 0, l, mid, x, y, w);
    update(u << 1 | 1, mid, r, x, y, w);

    seg[u] = mod(seg[u << 1 | 0] + seg[u << 1 | 1]);
}

ll get(ll u, ll l, ll r, ll x, ll y) {
    if (l >= y or r <= x)
        return 0;

    if (l >= x and r <= y)
        return seg[u];

    ll mid = (l + r) >> 1;
    bang(u, l, r);

    return mod(get(u << 1 | 0, l, mid, x, y) + get(u << 1 | 1, mid, r, x, y));
}

int main() {
    IOS

    cin >> n >> q;

    for0(i, n)cin >> arr[i];

    build(1, 0, n);

    fora(it, 1, q + 1) {
        string type;
        ll l, r;

        cin >> type >> l >> r;

        if (type == "add")
            update(1, 0, n, l - 1, r, mod(-l + 1));
        else
            cout << get(1, 0, n, l - 1, r) << "\n";
    }

    return 0;
}
