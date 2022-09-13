// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int s, n, sum = 0, m = 0, p = 0, q = 0;
    cin >> n;
    while (n > 0) {
        s = n % 10;
        n = n / 10;
        sum += s;
    }
    if (sum > 9) {
        while (sum > 0) {
            s = sum % 10;
            sum = sum / 10;
            m += s;
        }
        if (m > 0) {
            while (m > 0) {
                s = m % 10;
                m = m / 10;
                p += s;
            }
            if (p > 0) {
                while (p > 0) {
                    s = p % 10;
                    p = p / 10;
                    q += s;
                }
                cout << q;
            } else { cout << p; }
        } else { cout << m; }
    } else { cout << sum; }

    return 0;
}
