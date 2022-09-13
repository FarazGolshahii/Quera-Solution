// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <deque>
#include <assert.h>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <stdio.h>
#include <string.h>
#include <utility>
#include <math.h>
#include <bitset>
#include <iomanip>
#include <complex>

using namespace std;

#define rep(i, a, b) for (int i = (a), i##_end_ = (b); i < i##_end_; ++i)
#define debug(...) fprintf(stderr, __VA_ARGS__)
#define mp make_pair
#define x first
#define y second
#define pb push_back
#define SZ(x) (int((x).size()))
#define ALL(x) (x).begin(), (x).end()

template<typename T>
inline bool chkmin(T &a, const T &b) { return a > b ? a = b, 1 : 0; }

template<typename T>
inline bool chkmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }

template<typename T>
inline bool smin(T &a, const T &b) { return a > b ? a = b : a; }

template<typename T>
inline bool smax(T &a, const T &b) { return a < b ? a = b : a; }

typedef long long LL;

const int N = (int) 1e6 + 6, mod = (int) 0;
vector<int> adj[N];
int d[N];

void dfs(int v, int p = -1) {
    d[v] = (p == -1 ? 0 : d[p] + 1);
    for (int u: adj[v])
        if (u != p)
            dfs(u, v);
}

int main() {
    int n;
    cin >> n;
    for (int j = 0; j < n - 1; ++j) {
        int u, v;
        cin >> u >> v;
        --u, --v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int st, ed;
    cin >> st >> ed;
    --st, --ed;
    dfs(st);
    if (d[ed] & 1) {
        cout << "karakter e komaki_2\n";
    } else {
        cout << "karakter e komaki_1\n";
    }
}