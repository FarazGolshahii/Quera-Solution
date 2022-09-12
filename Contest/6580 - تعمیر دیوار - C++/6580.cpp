// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    int x, y, r, dx, dy;
    cin >> x >> y >> r >> dx >> dy;
    if (dx >= x && dx <= x + r && dy >= y - r && dy <= y)
        cout << "Mahdi";
    else
        cout << "Parsa";
    return 0;
}
