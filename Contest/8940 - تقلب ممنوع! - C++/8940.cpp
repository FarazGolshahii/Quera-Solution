// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

set <string> s;

int main() {
    int n, p, q;
    cin >> n >> p >> q;
    while (n--) {
        string t;
        cin >> t;
        s.insert(t.substr(0, p) + t.substr(t.size() - q, q));
    }
    cout << s.size() << endl;
    return 0;
}
