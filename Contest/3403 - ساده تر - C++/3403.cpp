// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << std::fixed;
    cout.precision(6);
    cout << "Sum : " << a + b + c + d << endl;
    cout << "Average : " << (a + b + c + d) / 4 << endl;
    cout << "Product : " << a * b * c * d << endl;
    cout << "MAX : " << max(max(a, b), max(c, d)) << endl;
    cout << "MIN : " << min(min(a, b), min(c, d)) << endl;
    return 0;
}
