// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include<bits/stdc++.h>

using namespace std;
const int N = 1e6 + 10, INF = 1e9 + 10;
typedef long long ll;
int a[N], r[N], l[N], mx[N], mn[N], pmn[N], pmx[N], n, seg[4 * N];

void upd(int x, int val, int s = 0, int e = n, int id = 1) {
    if (e <= x || s > x)
        return;
    if (e - s == 1) {
        seg[id] = max(seg[id], val);
        return;
    }
    int mid = (s + e) / 2;
    upd(x, val, s, mid, 2 * id);
    upd(x, val, mid, e, 2 * id + 1);
    seg[id] = max(seg[2 * id], seg[2 * id + 1]);
}

int get(int l, int r, int s = 0, int e = n, int id = 1) {
    if (l >= r)
        return 0;
    if (r <= s || e <= l)
        return 0;
    if (l <= s && e <= r)
        return seg[id];
    int mid = (s + e) / 2;
    return max(get(l, r, s, mid, 2 * id), get(l, r, mid, e, 2 * id + 1));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int q;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
        cin >> a[i], mx[i] = i - 1, mn[i] = INF;
    ll ans = 0;
    while (q--) {
        int st, en;
        cin >> st >> en;
        st--;
        en--;
        mx[st] = max(mx[st], en);
        mn[en] = min(mn[en], st);
        upd(en, en - st + 1);
    }
    for (int i = 0; i < n; i++)
        pmx[i] = max((i ? pmx[i - 1] : -1), mx[i]);
    for (int i = n - 1; i >= 0; i--)
        pmn[i] = min((i < n - 1 ? pmn[i + 1] : INF), mn[i]);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (int(st.size()) > 0 && a[st.top()] > a[i]) {
            r[st.top()] = i - 1;
            st.pop();
        }
        l[i] = int(st.size()) > 0 ? st.top() + 1 : 0;
        st.push(i);
    }
    while (int(st.size())) {
        r[st.top()] = n - 1;
        st.pop();
    }
    for (int i = 0; i < n; i++) {
        int x = l[i] ? pmx[l[i] - 1] : -1;
        int cur = 0;
        x = min(x, r[i]);
        if (r[i] < n - 1 && pmn[r[i] + 1] <= r[i]) {
            cur = max(cur, r[i] - max(pmn[r[i] + 1], l[i]) + 1);
        }
        if (x >= l[i])
            cur = (x - l[i] + 1);
        x++;
        x = max(x, l[i]);
        cur = max(cur, get(x, r[i] + 1));
        ans = max(ans, ll(a[i]) * cur);
    }
    cout << ans << "\n";
}