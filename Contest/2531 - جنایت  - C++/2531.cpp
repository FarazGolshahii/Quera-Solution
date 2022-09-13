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
const int N = 5001;
int l[N], r[N];
pair<int, int> p[2 * N];
int L, R, n;
int mini = 1e9, maxi = 0;

void check(double a) {
    if (a < L || a > R)
        return;
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (a >= l[i] && a <= r[i])
            cnt++;
    mini = min(mini, cnt);
    maxi = max(maxi, cnt);
}

int main() {
    cin >> L >> R >> n;
    for (int i = 0; i < n; i++)
        cin >> l[i] >> r[i];
    l[n] = L;
    r[n] = R;
    for (int i = 0; i < n + 1; i++)
        for (int j = -2; j < 3; j++) {
            check((double) l[i] + j / 2.0);
            check((double) r[i] + j / 2.0);
        }
    cout << mini << ' ' << maxi << endl;
    /////////////////////////////////////////////////////////////
    return 0;
}


