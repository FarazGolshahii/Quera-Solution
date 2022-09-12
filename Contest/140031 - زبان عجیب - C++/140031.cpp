// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    int n, s = 0;
    cin >> n;
    while (n > 0) {
        s += n % 10;
        n = n / 10;
    }
    cout << s;
    return 0;
}