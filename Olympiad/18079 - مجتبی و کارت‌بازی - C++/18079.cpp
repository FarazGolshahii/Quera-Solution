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

#define int ll

const int delta = 10847;
const int maxn = 2e5 + 5 + 10;
const int INF = 1e9 + 10;

int x[maxn], y[maxn], t[maxn], fen[maxn], ans[maxn], seg[maxn << 2];
vi v;
vpii v2;
spii st;

inline void add(int idx, int val) {
    for (; idx < maxn; idx += (idx & -idx))
        fen[idx] += val;
}

inline int get(int idx) {
    int ret = 0;

    for (; idx; idx -= (idx & -idx))
        ret += fen[idx];

    return ret;
}

inline int get(int l, int r) {
    return get(r) - get(l - 1);
}

void update(int u, int l, int r, int v, int w) {
    if (v < l or v >= r)
        return;

    if (l + 1 == r) {
        seg[u] = w;
        return;
    }

    int mid = (l + r) >> 1;
    int tmp1 = (u << 1), tmp2 = (u << 1) | 1;

    update(tmp1, l, mid, v, w);
    update(tmp2, mid, r, v, w);

    seg[u] = max(seg[tmp1], seg[tmp2]);
}

int get(int u, int l, int r, int w) {
    if (seg[u] < w)
        return -1;

    if (l + 1 == r)
        return l;

    int mid = (l + r) >> 1;
    int idl = (u << 1), idr = (u << 1) | 1;

    if (seg[idr] >= w)
        return get(idr, mid, r, w);

    return get(idl, l, mid, w);
}

int32_t main() {
    IOS

    int n, k;
    cin >> n >> k;

    fora(i, 1, n + 1) {
        cin >> x[i] >> y[i];

        v.pb(x[i]);
        v.pb(y[i]);
    }

    fora(i, 1, k + 1) {
        cin >> t[i];
        v.pb(t[i]);
    }

    sort(all(v));
    v.resize(unique(all(v)) - v.begin());

    fora(i, 1, n + 1) {
        x[i] = lower_bound(all(v), x[i]) - v.begin();
        x[i]++;

        y[i] = lower_bound(all(v), y[i]) - v.begin();
        y[i]++;

        v2.pb(MP(max(x[i], y[i]), i));
    }

    sort(all(v2), greater<pii>());

    fora(i, 1, k + 1) {
        t[i] = lower_bound(all(v), t[i]) - v.begin();
        t[i]++;

        st.insert(MP(-t[i], i));

        update(1, 1, k + 1, i, t[i]);
    }

    for (auto &j : v2) {
        int i = j.S;

        int maxi = max(x[i], y[i]);
        int mini = min(x[i], y[i]);

        while (st.size()) {
            pii p = *st.begin();
            p.F = -p.F;

            if (p.F < maxi)
                break;

            st.erase(st.begin());

            update(1, 1, k + 1, p.S, -p.F);
            add(p.S, 1);
        }

        int ret = get(1, 1, k + 1, mini);

        if (maxi == x[i]) {
            int s = ret + 1;

            if (ret == -1)
                s = 1;

            int ret2 = get(s, k) % 2;
            ans[i] = ret2;

        } else {
            if (ret == -1) {
                int ret2 = get(1, k) % 2;

                ans[i] = ret2;
            } else {
                int ret2 = (get(ret + 1, k) + 1) % 2;

                ans[i] = ret2;
            }
        }
    }

    int sum = 0;

    fora(i, 1, n + 1) {
        if (ans[i] == 0)
            sum += v[x[i] - 1];
        else
            sum += v[y[i] - 1];
    }

    cout << sum << "\n";
    return 0;
}
