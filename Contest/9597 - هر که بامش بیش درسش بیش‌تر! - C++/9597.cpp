// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define fi first
#define se second
typedef long long ll;
typedef pair<int, int> pii;
const int mod = 1000000007;

inline int in() {
    int x;
    scanf("%d", &x);
    return x;
}

const int N = 1000002;
int a[N], b[N];
vector <pii> cur;

int32_t main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i], b[a[i]] = i;
    for (int i = 1; i < n; i++) {
        if (i <= n / 2) {
            cur.push_back(make_pair(b[i], n / 2 + 1));
            int c = a[n / 2 + 1];
            swap(a[b[i]], a[n / 2 + 1]), swap(b[i], b[c]);
            cur.push_back(make_pair(b[i], i));
            c = a[i];
            swap(a[b[i]], a[i]), swap(b[i], b[c]);
        } else {
            cur.push_back(make_pair(b[i], i));
            int c = a[i];
            swap(a[b[i]], a[i]), swap(b[i], b[c]);
        }
    }
    cout << (int) cur.size() << '\n';
    for (int i = 0; i < cur.size(); i++)
        cout << cur[i].fi << ' ' << cur[i].se << '\n';
}
