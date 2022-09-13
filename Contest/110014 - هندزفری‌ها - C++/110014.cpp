// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

unsigned int factorial(unsigned int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

vector<int> removeDupWord(int str) {
    vector<int> res;
    while (str > 0) {
        res.push_back(str % 10);
        str = str / 10;
    }
    return res;
}

int main() {
    string a1, a2, b1, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if (a1 == b1)cout << "YES";
    else if (a2 == b2)cout << "YES";
    else if (a1 == b2)cout << "YES";
    else if (a2 == b1)cout << "YES";
    else cout << "NO";
    return 0;
}
