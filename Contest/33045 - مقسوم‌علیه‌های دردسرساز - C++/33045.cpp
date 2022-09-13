// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, j, i, s = 0, s1 = 0;
    cin >> a;
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                s++;
                s1 += j;
            }
        }
    }
    cout << s << " " << s1;
    return 0;
}
