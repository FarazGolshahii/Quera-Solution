// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    int a[1000], i, b;
    for (i = 0; i < 1000; i++) {
        cin >> a[i];
        b = i;
        if (a[i] == 0) {
            i = 1000;
        }
    }
    i = b - 1;
    for (i; i >= 0; i--) {
        cout << a[i] << endl;
    }
    return 0;
}
