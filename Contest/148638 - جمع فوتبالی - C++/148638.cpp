// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b, c, d;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c >> d;
        if (a + c > b + d) {
            cout << "perspolis";
        } else if (a + c < b + d) {
            cout << "esteghlal";
        } else if (a + c == b + d) {
            if (b > c) {
                cout << "esteghlal";
            } else if (b < c) {
                cout << "perspolis";
            } else if (b == c) {
                cout << "penalty";
            }
        }
        cout << endl;
    }
    return 0;
}
