// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll a[3], b[3];

    cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
    sort(b, b + 3);
    sort(a, a + 2);
    if (b[0] <= a[0] and b[1] <= a[1]) cout << "zende mimuni";
    else cout << "dari mimiri";
}
