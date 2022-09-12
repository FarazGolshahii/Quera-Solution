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
    int a, b, c, s2, i, j;
    vi n[4][3], s1, s;
    fori(i, 4) {
        cin >> a >> b >> c;
        n[i][0] = {a};
        n[i][1] = {b};
        n[i][2] = {c};
        s = max(n[i][0], max(n[i][1], n[i][2]));
        s1 = max(s1, s);
    }
    fori(i, 4) {
        fori(j, 3) {
            if (n[i][j] == s1) {
                cout << i + 1;
                return 0;
            }
        }
    }
    /////////////////////////////////////////////////////////////
    return 0;
}
