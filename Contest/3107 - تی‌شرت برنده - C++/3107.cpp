// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    long long int a, a1, b, b1;
    cin >> a >> a1 >> b >> b1;
    if ((b * b1) <= (a * a1))
        if (a >= b) {
            if (a1 >= b1) { cout << "yes"; }
            else {
                cout << "no";
                return 0;
            }
        } else {
            cout << "no";
            return 0;
        }
    else cout << "no";
    return 0;
}
