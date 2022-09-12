// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0) {
        if (a + b + c == 180) { cout << "Yes"; }
        else { cout << "No"; }
    } else cout << "No";
    return 0;
}
