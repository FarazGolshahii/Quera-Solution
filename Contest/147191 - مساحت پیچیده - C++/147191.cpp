// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

//r2(1 + π/3 – √3)
int main() {
    double n, part2 = (M_PI) / 3, part3 = sqrt(3);
    cin >> n;
    cout << setprecision(19) << n * n * (1 + part2 - part3);
    return 0;
}
