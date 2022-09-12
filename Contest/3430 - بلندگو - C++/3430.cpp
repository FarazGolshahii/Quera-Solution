// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int n, m;
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; i++) {
        m = 1;
        for (int j = 1; j <= i; j++) {
            s[i - m] = s[i];
            m++;
        }
        cout << s << endl;
    }
    return 0;
}
