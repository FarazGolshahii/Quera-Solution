// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>
#include <string>

using namespace std;

int main() {

    int n, i, c = 0;
    cin >> n;
    string a, b;
    cin >> a >> b;
    for (i = 0; i < n; i++) {
        if (a[i] == b[i]) {
            c++;
        }
    }
    cout << n - c;
    return 0;
}
