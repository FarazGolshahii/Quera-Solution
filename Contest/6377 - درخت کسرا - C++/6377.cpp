// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define N ((ll)101*1000)
#define MOD ((ll)1e9+7)

ll q;

ll solve(ll x, ll y) {
    if (y == 1)return x - 1;
    return solve(y, x % y) + x / y;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> q;
    while (q--) {
        ll x, y, ex;
        cin >> x >> y;
        if (x < y)swap(x, y);
        ex = __gcd(x, y);
        x /= ex;
        y /= ex;
        cout << solve(x, y) << "\n";
    }
    return 0;
}
