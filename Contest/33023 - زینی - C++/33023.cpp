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
    int n, m, a, b = 0, i, j;
    cin >> n >> m;
    int c[n][m] = {-1};
    fori(i, n) {
        fori(j, m) {
            cin >> a;
            c[i][j] = {a};
        }
    }
    for (i = 1; i < n - 1; i++) {
        for (j = 1; j < m - 1; j++) {
            if (c[i][j] > c[i + 1][j] and c[i][j] > c[i - 1][j]) {
                if (c[i][j] < c[i][j + 1] and c[i][j] < c[i][j - 1])b++;
            } else if (c[i][j] < c[i + 1][j] and c[i][j] < c[i - 1][j]) {
                if (c[i][j] > c[i][j + 1] and c[i][j] > c[i][j - 1])b++;
            }
        }
    }
    cout << b;
    /////////////////////////////////////////////////////////////
    return 0;
}

