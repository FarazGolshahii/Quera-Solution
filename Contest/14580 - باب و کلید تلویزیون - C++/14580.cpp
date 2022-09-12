// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, a, i, k, x;
    cin >> n >> x >> k;
    string f[n];
    for (i = 0; i < n; i++)
        cin >> f[i];
    a = (k + x) % n;
    if (a == 0)
        a++;
    cout << f[a - 1];
    return 0;
}
