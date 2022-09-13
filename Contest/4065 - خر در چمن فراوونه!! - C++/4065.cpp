// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    int a, b, c, s = 0;
    cin >> a >> b >> c;
    while (c > 0) {
        if (c % 2 == 0) {
            c--;
            s += b;
        } else if (c % 2 != 0) {
            c--;
            s += a;
        }
    }
    cout << s;
    return 0;
}
