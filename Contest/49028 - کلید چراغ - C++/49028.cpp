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
const int MAXN = 4e5 + 10;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    /////////////////////////////////////////////////////////////
    int n, i, m, s = 0;
    vi a;
    cin >> n;
    fori(i, n) {
        cin >> m;
        a.pb(m);
    }
    fori(i, n - 1) {
        if (a[i] == 0 and a[i + 1] == 1)s++;
        else if (a[i] == 1 and a[i + 1] == 0)s++;
    }
    cout << s;
    /////////////////////////////////////////////////////////////
    return 0;
}
