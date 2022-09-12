// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (b >= 11) {
        cout << "Left ";
        cout << 10 - a + 1 << " ";
        cout << 20 - b + 1 << " ";
    } else {
        cout << "Right ";
        cout << 10 - a + 1 << " ";
        cout << b << " ";
    }

    return 0;
}
