// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, c, i, m = 0;
    cin >> a;
    vector<int> b(a);
    for (i = 0; i < a; i++) {
        cin >> c;
        b[i] = c;
        m = max(m, b[i]);
    }
    for (i = 0; i < a; i++) {
        if (m == b[i])cout << i + 1;
    }
    return 0;
}
