// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define N ((ll)1010)

ll a, b, c;

int main() {
    cin >> a >> b >> c;
    if (a == b && b == c)return cout << 0, 0;
    if ((a + b + c) == a * 3 || (a + b + c) == b * 3 || (a + b + c) == c * 3)return cout << 1, 0;
    cout << 2;
    return 0;
}
