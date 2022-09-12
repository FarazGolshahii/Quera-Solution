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
const ll INF = 4e18;

int n, x, a1, b1, c1, a[maxn], b[maxn], c[maxn];
vector <string> v;
string s;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    cin >> s;
    a[0] = a[1] = 3, a[2] = a[3] = 1, a[4] = a[5] = 2;
    for (int i = 6; i < 1000; i++)
        a[i] = a[i - 6];
    b[0] = 1, b[1] = 2, b[2] = 3;
    for (int i = 3; i < 1000; i++)
        b[i] = b[i - 3];
    c[0] = 2, c[1] = 1, c[2] = 2, c[3] = 3;
    for (int i = 4; i < 1000; i++)
        c[i] = c[i - 4];
    for (int i = 0; i < n; i++) {
        a1 = a1 + bool(a[i] == (s[i] - '0'));
        b1 = b1 + bool(b[i] == (s[i] - '0'));
        c1 = c1 + bool(c[i] == (s[i] - '0'));
    }
    x = max({a1, b1, c1});
    if (a1 == x)
        v.pb("keyvoon");
    if (b1 == x)
        v.pb("nezam");
    if (c1 == x)
        v.pb("shir farhad");
    sort(v.begin(), v.end());
    cout << x << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
    return 0;
}