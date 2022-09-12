// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    int a[100], b[100], i, n, s = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];

    }
    for (i = 0; i < n; i++) {
        cin >> b[i];

    }
    for (i = 0; i < n; i++) {
        s += a[i] * b[i];

    }
    cout << s << endl;
    return 0;
}

