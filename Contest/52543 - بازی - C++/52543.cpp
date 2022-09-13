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
const int MAXN = 1e14 + 1;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    /////////////////////////////////////////////////////////////
    int n, m, i, j, f;
    cin >> n;
    vector<int> a, b;
    fori(i, n) {
        cin >> m;
        a.pb(m);
        b.pb(m);
    }
    sort(all(a));
    sort(all(b));
    reverse(all(a));
    j = 0;
    i = 0;
    for (f = 0; f < n; f++) {
        if (f % 2 == 0) {
            cout << a[i] << " ";
            i++;
        }
        else {
            cout << b[j] << " ";
            j++;
        }
    }
    /////////////////////////////////////////////////////////////
    return 0;
}
