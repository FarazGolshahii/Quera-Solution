// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>
#include <string>

using namespace std;

int main() {
    string a1, b1, c1, d1, a, b, c, d;
    cin >> a >> a1 >> b >> b1 >> c >> c1 >> d >> d1;
    if (a1[0] == 'R' && b1[0] == 'R' && c1[0] == 'R') {
        cout << b;
        return 0;
    }
    else if (a1[0] == 'R' && b1[0] == 'R' && d1[0] == 'R') {
        cout << b;
        return 0;
    }
    else if (a1[0] == 'R' && c1[0] == 'R' && d1[0] == 'R') {
        cout << c;
        return 0;
    }
    else if (b1[0] == 'R' && c1[0] == 'R' && d1[0] == 'R') {
        cout << c;
        return 0;
    }
    if (a1[0] == 'L' && b1[0] == 'L' && c1[0] == 'L') {
        cout << b;
        return 0;
    }
    else if (a1[0] == 'L' && b1[0] == 'L' && d1[0] == 'L') {
        cout << b;
        return 0;
    }
    else if (a1[0] == 'L' && c1[0] == 'L' && d1[0] == 'L') {
        cout << c;
        return 0;
    }
    else if (b1[0] == 'L' && c1[0] == 'L' && d1[0] == 'L') {
        cout << c;
        return 0;
    }
    if (a1[0] == 'R' && b1[0] == 'R') {
        cout << a;
        return 0;
    }
    else if (a1[0] == 'R' && c1[0] == 'R') {
        cout << a;
        return 0;
    }
    else if (a1[0] == 'R' && d1[0] == 'R') {
        cout << a;
        return 0;
    }
    if (a1[0] == 'L' && b1[0] == 'L') {
        cout << a;
        return 0;
    }
    else if (a1[0] == 'L' && c1[0] == 'L') {
        cout << a;
        return 0;
    }
    else if (a1[0] == 'L' && d1[0] == 'L') {
        cout << a;
        return 0;
    }
    if (b1[0] == 'R' && c1[0] == 'R') {
        cout << b;
        return 0;
    }
    else if (b1[0] == 'R' && d1[0] == 'R') {
        cout << b;
        return 0;
    }
    if (b1[0] == 'L' && c1[0] == 'L') {
        cout << b;
        return 0;
    }
    else if (b1[0] == 'L' && d1[0] == 'L') {
        cout << b;
        return 0;
    }
    if (c1[0] == 'R' && d1[0] == 'R') {
        cout << c;
        return 0;
    }
    if (c1[0] == 'L' && d1[0] == 'L') {
        cout << c;
        return 0;
    }
    return 0;
}
