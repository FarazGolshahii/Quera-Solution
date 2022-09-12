// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

#define pb push_back
#define X first
#define Y second
typedef long long ll;

using namespace std;
const ll maxn = 1e6 + 5;
const ll M = 712883;
const ll inf = 2e18;

long long z, n, m, l, x, y, maxx, a[maxn], b[maxn], dp[2][maxn];
vector <ll> v;


int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1)
            v.pb(b[i]);
    }
    sort(v.begin(), v.end());
    z = v.size();
    for (int i = 0; i < z; i++)
        cout << v[i] << " ";
    return 0;
}