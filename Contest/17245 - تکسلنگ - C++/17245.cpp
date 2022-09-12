// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    int i, d = a.size();
    for (i = 0; i < d; i = i + 5) {
        if (a[i] == '*' && a[i + 1] == '*' && a[i + 2] == '*' && a[i + 3] == '*' && a[i + 4] == '*') {
            cout << "T";
        } else if (a[i] == '*' && a[i + 1] == '*' && a[i + 2] == 'o' && a[i + 3] == '*' && a[i + 4] == '*') {
            cout << "M";
        } else if (a[i] == 'o' && a[i + 1] == 'o' && a[i + 2] == '*' && a[i + 3] == 'o' && a[i + 4] == 'o') {
            cout << "A";
        } else if (a[i] == '*' && a[i + 1] == 'o' && a[i + 2] == 'o' && a[i + 3] == 'o' && a[i + 4] == '*' &&
                   b[i] == 'o') {
            cout << "X";
        } else if (a[i] == '*' && a[i + 1] == 'o' && a[i + 2] == 'o' && a[i + 3] == 'o' && a[i + 4] == '*' &&
                   b[i] == '*') {
            cout << "N";
        }
    }
    return 0;
}
