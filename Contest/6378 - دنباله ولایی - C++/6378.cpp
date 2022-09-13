// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;
#define ll int
#define N ((ll)1010)

ll n;

int main() {
    cin >> n;
    if (n < 4 || n == 6)return cout << "0\n", 0;
    if (n == 4)
        return cout << "2\n1 2 1 0\n2 0 2 0", 0;
    if (n == 5)
        return cout << "1\n2 1 2 0 0", 0;
    cout << "1\n";
    cout << n - 4 << " " << 2 << " " << 1 << " ";
    for (int i = 0; i < n - 7; i++)cout << "0 ";
    cout << "1 0 0 0";
    return 0;
}
