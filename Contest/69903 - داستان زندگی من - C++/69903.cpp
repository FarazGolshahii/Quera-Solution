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
    int m1, d1, m2, d2, i, j = 0, f = 0;
    cin >> m1 >> d1 >> m2 >> d2;
    for (i = 1; i < m1; i++) {
        if (i <= 6)j += 31;
        if (i > 6 and i <= 11)j += 30;
        if (i == 12)j += 29;
    }
    j += d1;
    for (i = 1; i < m2; i++) {
        if (i <= 6)f += 31;
        if (i > 6 and i <= 11)f += 30;
        if (i == 12)f += 29;
    }
    f += d2;
    cout << abs(f - j);
    /////////////////////////////////////////////////////////////
    return 0;
}
