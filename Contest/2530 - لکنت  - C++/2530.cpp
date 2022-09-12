// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, i, c = 1;
    string s;
    cin >> s;
    n = s.size();
    for (i = 0; i < n; i++) {
        if (s[i] == 'T') {
            c = c * 2;
        }
        if (s[i] == 'F' || s[i] == 'L') {
            c = c * 2;
        }
    }
    cout << c;
    return 0;
}
