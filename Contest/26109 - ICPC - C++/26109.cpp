// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + d > b + c) { cout << "Persepolis"; }
    else if (a + d < b + c) { cout << "Esteghlal"; }
    else if (a + d == b + c) {
        if (b > d) { cout << "Esteghlal"; }
        else if (b < d) { cout << "Persepolis"; }
        else if (b == d) { cout << "Penalty"; }
    }
    return 0;
}
