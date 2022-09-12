// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, i, m;
    string a, b[100];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a;
        b[i] = {a};
    }
    m = i - 1;
    for (m; m >= 0; m--) {
        cout << b[m] << " ";
    }
    return 0;
}
