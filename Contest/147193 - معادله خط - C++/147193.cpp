// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a == 0) {
        if (b == 0) {
            cout << "infinite";
            return 0;
        } else {
            cout << "invalid";
            return 0;
        }
    } else {
        cout << "unique";
        return 0;
    }
}
