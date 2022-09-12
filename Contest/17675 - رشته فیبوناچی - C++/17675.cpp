// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    int a = 1, b = 1, c = 0, n, s = 0;

    cin >> n;

    if (n >= 2)cout << "++";
    else if (n >= 1)cout << "+";

    for (int j = 3; j <= n; j++) {
        a = 1;
        b = 1;
        s = 0;
        c = 0;
        for (int i = 3; i <= n; ++i) {
            c = a + b;
            if (c == j) { s++; }
            a = b;
            b = c;
        }
        if (s == 0)cout << "-";
        else cout << "+";
    }


    return 0;
}
