// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

int main() {
    float z = 0;
    int n, i, x, y, s = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> x >> y;
        z = sqrt(((x * x) + (y * y)));
        if (z <= 10) { s = s + 10; }
        else if (z > 10 && z <= 30) { s = s + 9; }
        else if (z > 30 && z <= 50) { s = s + 8; }
        else if (z > 50 && z <= 70) { s = s + 7; }
        else if (z > 70 && z <= 90) { s = s + 6; }
        else if (z > 90 && z <= 110) { s = s + 5; }
        else if (z > 110 && z <= 130) { s = s + 4; }
        else if (z > 130 && z <= 150) { s = s + 3; }
        else if (z > 150 && z <= 170) { s = s + 2; }
        else if (z > 170 && z <= 190) { s = s + 1; }
        else if (z > 190) { s = s + 0; }
    }
    cout << s;
    return 0;
}
