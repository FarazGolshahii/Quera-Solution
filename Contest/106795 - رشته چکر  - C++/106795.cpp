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

vector<char> removeDupWord(string str) {
    vector<char> res;
    for (auto x: str) {
        res.push_back(x);
    }
    return res;
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    if (str1[0] == str2[str2.size() - 1])cout << "YES";
    else cout << "NO";
    return 0;
}
