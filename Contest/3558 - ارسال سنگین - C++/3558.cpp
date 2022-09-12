// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
typedef long long ll;

#define F first
#define S second
#define pb push_back
#define endl '\n'
#define all(o) o.begin(), o.end()
#define fori(i, a) for (int i = 0; i < (a); i++)
const int MAXN = 1e9 + 1;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    /////////////////////////////////////////////////////////////
    int n, m, i, j, b, e, s = 0;
    vi a(30, 0);
    cin >> n >> m;
    fori(i, n) {
        cin >> b >> e;
        for (j = b; j <= e; j++) {
            a[j] = 1;
        }
    }
    fori(i, m) {
        cin >> b >> e;
        for (j = b; j <= e; j++) {
            if (a[j] == 1)s++;
        }
    }
    cout << s;
    /////////////////////////////////////////////////////////////
    return 0;
}


