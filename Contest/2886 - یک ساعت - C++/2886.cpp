// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, a1, b1;
    cin >> a >> b;
    a1 = 12 - a;
    b1 = 60 - b;
    if (a1 == 12)a1 = 0;
    if (b1 == 60)b1 = 0;
    if (a1 < 10)cout << 0 << a1;
    else cout << a1;
    cout << ":";
    if (b1 < 10)cout << 0 << b1;
    else cout << b1;
    return 0;
}
