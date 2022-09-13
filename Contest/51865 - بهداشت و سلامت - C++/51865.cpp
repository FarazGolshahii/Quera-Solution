// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (b == 0)cout << 20;
    else if (b == 7)cout << a;
    else if (b >= a)cout << 0;
    else cout << a - b;
    return 0;
}
