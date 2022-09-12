// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    int a1, a2, a3, a4, b[4] = {0}, i = 0, j = 0;
    cin >> a1 >> a2 >> a3 >> a4;
    while ((a1 > 0) && (a3 > 0)) {
        if (j % 2 == 0) { a1--; }
        else { a3--; }
        j++;
        b[i]++;
        i++;
        if (i == 4) { i = 0; }
    }
    cout << b[0] << " " << b[1] << " " << b[2] << " " << b[3];
    return 0;
}
