// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    cout << fixed << setprecision(6) << ((n & 1) ? ((n - 1) / double(4)) : (n * n / double(4 * (n + 1))));
}
