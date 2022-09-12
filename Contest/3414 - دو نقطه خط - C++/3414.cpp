// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c)
        cout << "Vertical";
    else if (b == d)
        cout << "Horizontal";
    else
        cout << "Try again";
    return 0;

}
