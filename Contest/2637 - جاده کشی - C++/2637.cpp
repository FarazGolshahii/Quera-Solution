// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    if (a % 2 == 0) {
        a = a / 2;
        a = (a + 1) * (a + 1);
        cout << a;
    } else {
        a = a - 1;
        a = a / 2;
        a = (a + 1) * (a + 2);
        cout << a;
    }
    return 0;
}
