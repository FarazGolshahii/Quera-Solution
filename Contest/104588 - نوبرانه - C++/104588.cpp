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
    int s = 0, a;
    for (int i = 0; i < 5; i++) {
        cin >> a;
        if (a >= 80)s++;
    }
    cout << "Mamma mia";
    if (s >= 3) cout << "!";
    else if (s >= 1 and s <= 2)cout << "!!";
    else cout << "!!!";
    return 0;
}
