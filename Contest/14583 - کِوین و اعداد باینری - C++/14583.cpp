// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

const int mod = 1e9 + 7;
using namespace std;

int main() {
    string s;
    cin >> s;
    long long n = s.length(), c110 = 0, ans = 0, c1 = 0;
    for (int i = 0; i < n; i++) {
        char c = s[i];
        ans = (ans + (c == '0') * ((c1 * (c1 - 1) * (c1 - 2) / 6) % mod + c110)) % mod;
        c110 = (c110 + ((c == '0') * (c1 * (c1 - 1) / 2) % mod)) % mod;
        c1 += (c == '1');
    }
    cout << ans;
}
