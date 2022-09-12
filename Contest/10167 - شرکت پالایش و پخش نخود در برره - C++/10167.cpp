// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_Pair
#define ld long double
#define F first
#define S second

using namespace ::std;

const ll maxn = 1e5 + 500;

ll a[maxn];

int main() {
    ll n, m;
    cin >> m >> n;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll ans = 0;
    sort(a, a + n);
    ll bar = 1;
    ll ki = n - 2;
    ll cha = a[n - 1];
    while (ki >= 0) {
        if (a[ki] == cha) {
            ki--;
            bar++;
        } else {
            ll t = cha - a[ki];
            if (t * bar <= m) {
                m -= t * bar;
                cha = a[ki];
            } else {
                break;
            }
            ki--;
            bar++;
        }
    }
    for (ll i = 0; i <= ki; i++) {
        ans += a[i] * a[i];
    }
    ll t = m / bar;
    cha -= t;
    m -= t * bar;
    ans += (cha - 1) * (cha - 1) * m;
    ans += cha * cha * (bar - m);
    cout << ans;

}
