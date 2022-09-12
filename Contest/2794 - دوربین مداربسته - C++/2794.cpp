// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    int a1, a2, b1, b2, c1, c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    if (a1 == b1) cout << c1;
    else if (a1 == c1) cout << b1;
    else if (b1 == c1) cout << a1;
    cout << " ";
    if (a2 == b2)
        cout << c2;
    else if (a2 == c2)
        cout << b2;
    else if (b2 == c2)
        cout << a2;
    return 0;
}
