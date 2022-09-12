// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

int main() {
    int f = 0, g = 0, m, n, i, j;
    cin >> n >> m;
    string s;
    for (i = 0; i < n; i++) {
        cin >> s;
        for (j = 0; j < m; j++) {
            if (s[j] == '*') { f++; }
        }
    }
    for (i = 0; i < n; i++) {
        cin >> s;
        for (j = 0; j < m; j++) {
            if (s[j] == '*') { g++; }
        }
    }
    cout << f << " " << g;
    return 0;
}
