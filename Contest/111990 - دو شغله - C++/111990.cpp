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

char asciiToChar(int n) {
    return char(n);
}

int charToAscii(char n) {
    return int(n);
}

vector<char> removeDupWord(string str) {
    vector<char> res;
    for (auto x: str) {
        res.push_back(x);
    }
    return res;
}

int main() {
    string str;
    cin >> str;
    if (str == "shanbe" or str == "doshanbe" or str == "chaharshanbe")cout << "perspolis";
    else if (str == "yekshanbe" or str == "seshanbe" or str == "panjshanbe")cout << "bahman";
    else cout << "tatil";
    return 0;
}
