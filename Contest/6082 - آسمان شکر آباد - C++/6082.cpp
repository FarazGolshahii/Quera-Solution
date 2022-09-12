// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>
#include <string>

using namespace std;

int main() {
    int y, x, m, c = 0;
    cin >> y >> x;
    string a[x], n;
    for (int j = 0; j < y; j++) {
        cin >> n;
        m = n.size();
        for (int i = 0; i < m; i++) {
            if (n[i] == '*') {
                c++;
            }
        }
    }
    cout << c;
    return 0;
}
