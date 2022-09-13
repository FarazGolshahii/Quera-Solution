// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include<bits/stdc++.h>

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

const int maxn = 1e4 + 4;
const int mod = 1e9 + 7;

int n, l, q;
int ans[201][maxn];
int A[maxn], T[3 * maxn], L[maxn], L2[maxn], H[maxn];
vi V[maxn];

void f(int i) {
    memset(H, 0, sizeof(H));

    fora(j, 1, n - l + 2) if (j != i) H[T[j + maxn]]++;
    rof0(j, l) {
        H[j] += H[j + 1];

        for (auto t : V[j])
            ans[t][i] = H[j];
    }
}

int main() {
    IOS

    cin >> n >> l;
    fora(i, 1, n + 1)cin >> A[i];

    cin >> q;
    fora(i, 1, q + 1) {
        int j;
        cin >> j;

        V[l - j].pb(i);
    }

    fora(i, -n, n - l + 2)fora(j, 1, l + 1)if (i + j - 1 > 0)
                T[i + maxn] += A[j] == A[i + j - 1];


    f(1);

    fora(j, 2, n - l + 2) {
        fora(i, 1, n + 1)T[i + maxn] -= A[j - 1] == A[i];

        rofa(i, n, -n + 1)T[i + maxn] = T[i + maxn - 1];

        fora(i, 1, n + 1)if (A[i] == A[j + l - 1])
                T[i - l + 1 + maxn]++;

        f(j);
    }

    fora(i, 1, q + 1) {
        fora(j, 1, n - l + 2)cout << ans[i][j] << " ";

        cout << "\n";
    }

    return 0;
}
