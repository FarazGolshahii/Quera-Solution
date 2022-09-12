// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <queue>
#include <vector>
#include <cmath>
#include <set>
#include <map>

using namespace std;

inline int in() {
    int x;
    scanf("%d", &x);
    return x;
}

const int N = 2112, E = 8 * N, INF = 1e9;

int head[N], from[E], to[E], bro[E], nex[E], cap[E], w[E], cntE;
int par[N], d[N], have[N];
bool inQ[N];
bool isGood[N];

void _addE(int u, int v, int c, int weight) {
    int e = cntE++;
    bro[e] = head[u];
    head[u] = e;
    w[e] = weight;
    cap[e] = c;
    from[e] = u;
    to[e] = v;
}

void addE(int u, int v, int c, int weight) {
    _addE(u, v, c, weight);
    _addE(v, u, 0, -weight);
}

int in(int v) { return v * 2; }

int out(int v) { return v * 2 + 1; }

void addE(int u, int v, int w) { addE(out(u), in(v), 1, w); }

void push(queue<int> &q, int v) {
    if (inQ[v])
        return;
    inQ[v] = true;
    q.push(v);
}

void push(int s, int t) {
    fill(d, d + N, INF);
    fill(par, par + N, -1);
    fill(have, have + N, 0);
    have[s] = 1;
    queue<int> q;
    d[s] = 0;
    push(q, s);
    while (q.size()) {
        int v = q.front();
        q.pop();
        inQ[v] = false;
        for (int e = head[v]; e != -1; e = bro[e]) {
            int u = to[e];
            if (cap[e] > 0 && d[u] > d[v] + w[e]) {
                par[u] = e;
                d[u] = d[v] + w[e];
                have[u] = min(have[v], cap[e]);
                push(q, u);
            }
        }
    }
}

int minCostMaxFlow(int s, int t, int &flow) {
    int cost = 0;
    flow = 0;
    while (1) {
        push(s, t);
        if (par[t] == -1)
            break;
        int f = have[t];
        for (int e = par[t]; e != -1; e = par[from[e]]) {
            cost += f * w[e];
            cap[e] -= f;
            cap[e ^ 1] += f;
        }
        flow += f;
    }
    return cost;
}

int main() {
    int n = in(), m = in(), k = in();
    string mp;
    cin >> mp;
    fill(head, head + N, -1);
    int nGoods = 0;
    for (int i = 0; i < n; i++)
        nGoods += (isGood[i] = (mp[i] == '1'));
    while (m--) {
        int u = in() - 1, v = in() - 1, w = in();
        assert(w != 0);
        addE(u, v, w);
        addE(v, u, w);
    }
    for (int i = 0; i < n; i++)
        addE(in(i), out(i), 1, 0);
    push(in(0), out(n - 1));
    int ans = d[in(n - 1)];

    int s = 2 * n, t = 2 * n + 1;
    addE(out(0), t, 1, 0);
    addE(out(n - 1), t, 1, 0);
    for (int i = 0; i < n; i++)
        if (isGood[i])
            addE(s, in(i), 1, 0);
    int flow;
    int cost = minCostMaxFlow(s, t, flow);
    if (flow == 2) {
        ans = min(ans, cost + k);
        ans = min(ans, cost + k * (nGoods - 1));
    }
    if (ans >= INF)
        cout << "Impossible\n";
    else
        cout << ans << endl;
}

