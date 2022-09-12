// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] == s[i + n]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
