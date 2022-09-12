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
    string s;
    cin >> s;
    string ans;
    ll a[30] = {0};
    for (int i = 0; i < s.size(); i++) {
        if (isupper(s[i]))
            a[s[i] - 'A']++;
        else
            a[s[i] - 'a']++;
    }
    for (int i = 0; i < s.size(); i++) {
        ll y;
        if (isupper(s[i])) {
            ll X = a[s[i] - 'A'];
            ll A = s[i] - 'A';
            ll y = (X * A + 1) % 26;
            ans += (char) (y + 'A');
        } else {
            ll X = a[s[i] - 'a'];
            ll A = s[i] - 'a';
            ll y = (X * A + 1) % 26;
            ans += (char) (y + 'a');
        }
    }
    cout << ans;
}
