// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, maxi = 0;
    cin >> n;
    for (int i = n - 1; i >= 1; i--) {
        maxi = max(maxi, __gcd(n, i));
    }
    cout << maxi;
    return 0;
}
