// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    int n;
    cin >> n;
    int ans = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i < n; i++) {
        int t = 0;
        getline(cin, s);
        for (int j = 0; j < s.size(); j++) if (s[j] != ' ') t++;
        getline(cin, s);
        for (int j = 0; j < s.size(); j++) if (s[j] != ' ') t--;
        if (t) ans++;
    }
    cout << ans << endl;
}
