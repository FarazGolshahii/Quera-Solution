// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    int i, a, n, b;
    float sum = 0, k, c;
    cin >> n >> k;
    for (i = 0; i < n; i++) {
        cin >> a;
        sum += a;
    }
    b = sum / k;
    if (b < (sum / k))
        b++;
    cout << n - b;
    return 0;
}
